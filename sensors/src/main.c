
#include <stdio.h>
#include <zephyr/device.h>
#include <zephyr/drivers/sensor.h>
#include <zephyr/kernel.h>
#include <zephyr/sys/util.h>

void main(void) {
  struct sensor_value temp1, temp2, hum, press;
  struct sensor_value accel[3];

  const struct device *const hts221 = DEVICE_DT_GET_ONE(st_hts221);
  const struct device *const lis3dh = DEVICE_DT_GET_ONE(st_lis3dh);
  const struct device *const lps25hb = DEVICE_DT_GET_ONE(st_lps25hb_press);

  if (!device_is_ready(hts221)) {
    printk("%s: device is not ready.\n", hts221->name);
    return;
  }
  if (!device_is_ready(lis3dh)) {
    printf("%s: device is not ready.\n", lis3dh->name);
    return;
  }
  if (!device_is_ready(lps25hb)) {
    printf("%s: device is not ready.\n", lps25hb->name);
    return;
  }

  while (true) {
    int ret;

    /* Get sensor samples */

    if (sensor_sample_fetch(hts221) < 0) {
      printf("HTS221 Sensor sample update error\n");
      return;
    }
    if (sensor_sample_fetch(lps25hb) < 0) {
      printf("LPS25HB Sensor sample update error\n");
      return;
    }

    ret = sensor_sample_fetch(lis3dh);
    if (ret == -EBADMSG) {
      ret = 0;
    }

    /* Get sensor data */

    sensor_channel_get(hts221, SENSOR_CHAN_AMBIENT_TEMP, &temp1);
    sensor_channel_get(hts221, SENSOR_CHAN_HUMIDITY, &hum);
    sensor_channel_get(lps25hb, SENSOR_CHAN_PRESS, &press);
    sensor_channel_get(lps25hb, SENSOR_CHAN_AMBIENT_TEMP, &temp2);

    if (ret == 0) {
      ret = sensor_channel_get(lis3dh, SENSOR_CHAN_ACCEL_XYZ, accel);
      if (ret < 0) {
        printf("LIS3DH: ERROR: Unable to read accelerometer data: %d\n", ret);
      }
    }

    /* Display sensor data */

    /* Erase previous */
    printf("\0033\014");

    printf("Board: %s\n", CONFIG_BOARD);

    printf("STEVAL-IDI003V2 sensor dashboard\n\n");

    /* hts221 temperature */
    printf("HTS221: Temperature: %.1f C\n", sensor_value_to_double(&temp1));

    /* hts221 humidity */
    printf("HTS221: Relative Humidity: %.1f%%\n", sensor_value_to_double(&hum));

    /* lps25hb pressure */
    printf("LPS25HB: Pressure:%.3f kpa\n", sensor_value_to_double(&press));

    /* lps25hb temperature */
    printf("LPS25HB: Temperature: %.1f C\n", sensor_value_to_double(&temp2));

    if (ret == 0) {
      /* lis3dh accelerometer */
      printf("LIS3DH: Accel (m.s-2): x %f , y %f , z %f\n",
             sensor_value_to_double(&accel[0]),
             sensor_value_to_double(&accel[1]),
             sensor_value_to_double(&accel[2]));
    }

    k_sleep(K_MSEC(2000));
  }
}
