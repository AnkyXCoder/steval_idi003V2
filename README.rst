.. _steval-idi003V2-sample:

STEVAL-IDI003V2: shield Standard (Mode 1) sample
#################################################

Overview
********
This sample enables all sensors of a STEVAL-IDI003V2 shield, and then
periodically reads and displays data from the shield sensors:

- [HTS221](https://www.st.com/en/mems-and-sensors/hts221.html): Ambient temperature and relative humidity
- [LPS25HB](https://www.st.com/en/mems-and-sensors/lps25hb.html): Atmospheric pressure and ambient temperature
- [LIS3DH](https://www.st.com/en/mems-and-sensors/lis3dh.html): 3-Axis Accelerometer
- [MP34DT01](https://www.st.com/en/audio-ics/mp34dt01-m.html): Digital Microphone

Requirements
************

This sample communicates over I2C with the STEVAL-IDI003V2 shield
stacked on a board with an Arduino connector. The board's I2C must be
configured for the I2C Arduino connector in the devicetree. See for
example the :ref:`nucleo_f401re_board` board source code:

- :zephyr_file:`boards/arm/nucleo_f401re/nucleo_f401re.dts`
- :zephyr_file:`boards/arm/nucleo_f401re/arduino_r3_connector.dts`

Please note that this sample can't be used with boards already supporting
one of the sensors available on the shield (such as disco_l475_iot1) as zephyr
does not yet support sensors multiple instances.

References
**********

-STEVAL-IDI003V2: http://www.st.com/en/evaluation-tools/steval-idi003v2.html

Building and Running
********************

For this example, we use a :ref:`nucleo_f401re_board` board.

Sample Output
=============

 .. code-block:: console

   #1 @ 40212 ms: x 2.872800 , y 4.673088 , z 8.273664
   Observation:1
   Temperature:33.1 CRelative Humidity:33.5%
   #2 @ 42223 ms: x 2.872800 , y 4.596480 , z 8.235360
   Observation:2
   Temperature:33.1 CRelative Humidity:33.5%
   #2 @ 2020 ms: x 2.681280 , y 5.056128 , z 7.967232
   Observation:2
   Temperature:33.2 CRelative Humidity:33.5%
   #3 @ 4030 ms: x 2.796192 , y 4.941216 , z 7.967232
   Observation:3
   Temperature:33.2 CRelative Humidity:33.5%
   #4 @ 6040 ms: x 2.949408 , y 4.941216 , z 7.967232
   Observation:4
   Temperature:33.2 CRelative Humidity:33.5%
   #5 @ 8050 ms: x 2.872800 , y 4.902912 , z 7.967232
   Observation:5
   Temperature:33.2 CRelative Humidity:33.5%
   #6 @ 10060 ms: x 2.834496 , y 4.941216 , z 7.967232
   Observation:6
   Temperature:33.2 CRelative Humidity:33.5%
   #7 @ 12070 ms: x 2.796192 , y 4.826304 , z 8.043840
   Observation:7
   Temperature:33.2 CRelative Humidity:33.5%
   #8 @ 14080 ms: x 2.796192 , y 4.826304 , z 8.005536
   Observation:8
   Temperature:33.2 CRelative Humidity:33.5%
   #9 @ 16090 ms: x 2.872800 , y 4.788000 , z 8.120448
   Observation:9
   Temperature:33.1 CRelative Humidity:33.5%
   #10 @ 18100 ms: x 2.834496 , y 4.826304 , z 8.043840
   Observation:10
   Temperature:33.1 CRelative Humidity:33.5%
   #11 @ 20110 ms: x 2.834496 , y 4.788000 , z 8.158752
   Observation:11
   Temperature:33.1 CRelative Humidity:33.5%
   #12 @ 22121 ms: x 2.834496 , y 4.788000 , z 8.158752
   Observation:12
   Temperature:33.1 CRelative Humidity:33.5%
   #13 @ 24131 ms: x 2.834496 , y 4.749696 , z 8.082144
   Observation:13
   Temperature:33.1 CRelative Humidity:33.5%
   #14 @ 26141 ms: x 2.911104 , y 4.749696 , z 8.197056
   Observation:14
   Temperature:33.1 CRelative Humidity:33.5%
   #15 @ 28151 ms: x 2.949408 , y 4.673088 , z 8.082144
   Observation:15
   Temperature:33.1 CRelative Humidity:33.5%
   #16 @ 30161 ms: x 2.949408 , y 4.634784 , z 8.235360
   Observation:16
   Temperature:33.1 CRelative Humidity:33.5%
   #17 @ 32172 ms: x 2.911104 , y 4.596480 , z 8.120448
   Observation:17
   Temperature:33.1 CRelative Humidity:33.5%
   #18 @ 34182 ms: x 2.949408 , y 4.711392 , z 8.235360
   Observation:18
   Temperature:33.1 CRelative Humidity:33.5%
   #19 @ 36192 ms: x 2.911104 , y 4.596480 , z 8.197056
   Observation:19
   Temperature:33.1 CRelative Humidity:33.5%
   #20 @ 38202 ms: x 2.911104 , y 4.596480 , z 8.158752
   Observation:20
   Temperature:33.1 CRelative Humidity:33.5%


    <repeats endlessly every 2 seconds>
