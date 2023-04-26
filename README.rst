.. _steval-idi003V2-sample:

STEVAL-IDI003V2 shield sample
#################################################

Overview
********
This sample enables all sensors of a STEVAL-IDI003V2 shield, and then
periodically reads and displays data from the shield sensors:

- HTS221: Ambient temperature and relative humidity
- LPS25HB: Atmospheric pressure and ambient temperature
- LIS3DH: 3-Axis Accelerometer
- MP34DT01: Digital Microphone

Requirements
************

This sample communicates over I2C with the STEVAL-IDI003V2 shield
stacked on a board with an Arduino connector. The board's I2C must be
configured for the I2C Arduino connector in the devicetree.
See for example the `nucleo_f401re_board` board source code:

- `boards/arm/nucleo_f401re/nucleo_f401re.dts`
- `boards/arm/nucleo_f401re/arduino_r3_connector.dts`

Please note that this sample can't be used with boards already supporting
one of the sensors available on the shield (such as disco_l475_iot1) as zephyr
does not yet support sensors multiple instances.

References
**********

-STEVAL-IDI003V2: http://www.st.com/en/evaluation-tools/steval-idi003v2.html

Tested with Boards
******************

- ST Microelectronics STM32 Nucleo-F401RE
- Nordic Semiconductor nRF52840
- Espressif ESP32 Devkit
- Espressif ESP32-C3 Devkit-M

Building and Running
********************

For this example, we use a `nucleo_f401re_board` board.

Sample Output
=============

 .. code-block:: console

    STEVAL-IDI003V2 sensor dashboard

    HTS221: Temperature: 33.5 C
    HTS221: Relative Humidity: 51.0%
    LPS25HB: Pressure:100.018 kpa
    LPS25HB: Temperature: 35.9 C
    LIS3DH: Accel (m.s-2): x 4.673088 , y 1.225728 , z 8.656704

    STEVAL-IDI003V2 sensor dashboard

    HTS221: Temperature: 33.5 C
    HTS221: Relative Humidity: 51.0%
    LPS25HB: Pressure:100.008 kpa
    LPS25HB: Temperature: 35.9 C
    LIS3DH: Accel (m.s-2): x 4.558176 , y 1.187424 , z 8.733312

    STEVAL-IDI003V2 sensor dashboard

    HTS221: Temperature: 33.4 C
    HTS221: Relative Humidity: 51.0%
    LPS25HB: Pressure:100.017 kpa
    LPS25HB: Temperature: 35.9 C
    LIS3DH: Accel (m.s-2): x 4.558176 , y 1.187424 , z 8.695008

    STEVAL-IDI003V2 sensor dashboard

    HTS221: Temperature: 33.4 C
    HTS221: Relative Humidity: 51.0%
    LPS25HB: Pressure:100.014 kpa
    LPS25HB: Temperature: 35.9 C
    LIS3DH: Accel (m.s-2): x 5.937120 , y -0.153216 , z 6.358464

    STEVAL-IDI003V2 sensor dashboard

    HTS221: Temperature: 33.5 C
    HTS221: Relative Humidity: 51.0%
    LPS25HB: Pressure:100.040 kpa
    LPS25HB: Temperature: 35.9 C
    LIS3DH: Accel (m.s-2): x -0.344736 , y -8.120448 , z 5.171040

    STEVAL-IDI003V2 sensor dashboard

    HTS221: Temperature: 33.5 C
    HTS221: Relative Humidity: 51.5%
    LPS25HB: Pressure:100.050 kpa
    LPS25HB: Temperature: 36.0 C
    LIS3DH: Accel (m.s-2): x 1.991808 , y 8.580096 , z 4.175136

    STEVAL-IDI003V2 sensor dashboard

    HTS221: Temperature: 33.5 C
    HTS221: Relative Humidity: 51.5%
    LPS25HB: Pressure:100.040 kpa
    LPS25HB: Temperature: 36.0 C
    LIS3DH: Accel (m.s-2): x 7.928928 , y -1.072512 , z 4.481568

    STEVAL-IDI003V2 sensor dashboard

    HTS221: Temperature: 33.5 C
    HTS221: Relative Humidity: 51.5%
    LPS25HB: Pressure:100.042 kpa
    LPS25HB: Temperature: 36.0 C
    LIS3DH: Accel (m.s-2): x 2.987712 , y -8.197056 , z 4.251744

    STEVAL-IDI003V2 sensor dashboard

    HTS221: Temperature: 33.5 C
    HTS221: Relative Humidity: 51.5%
    LPS25HB: Pressure:100.046 kpa
    LPS25HB: Temperature: 36.0 C
    LIS3DH: Accel (m.s-2): x 2.221632 , y -8.733312 , z 4.136832

    STEVAL-IDI003V2 sensor dashboard

    HTS221: Temperature: 33.6 C
    HTS221: Relative Humidity: 51.5%
    LPS25HB: Pressure:100.041 kpa
    LPS25HB: Temperature: 35.0 C
    LIS3DH: Accel (m.s-2): x -6.971328 , y -1.340640 , z 6.473376

    STEVAL-IDI003V2 sensor dashboard

    HTS221: Temperature: 33.6 C
    HTS221: Relative Humidity: 51.5%
    LPS25HB: Pressure:100.046 kpa
    LPS25HB: Temperature: 35.0 C
    LIS3DH: Accel (m.s-2): x 7.967232 , y 2.336544 , z 4.634784

    STEVAL-IDI003V2 sensor dashboard

    HTS221: Temperature: 33.6 C
    HTS221: Relative Humidity: 51.5%
    LPS25HB: Pressure:100.048 kpa
    LPS25HB: Temperature: 35.1 C
    LIS3DH: Accel (m.s-2): x 9.652608 , y -0.038304 , z 1.417248

    <repeats endlessly every 2 seconds>
