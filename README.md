# DFRobot_DHT11

DHT11 is used to read the temperature and humidity of the current environment.

## DFRobot_DHT11 Library for Arduino
---------------------------------------------------------
Provides an Arduino library for read DHT11 data to calculate temperature and humidity

## Table of Contents

* [Installation](#installation)
* [Methods](#methods)
* [Compatibility](#compatibility)
* [History](#history)
* [Credits](#credits)

<snippet>
<content>

## Installation

To use this library download the zip file, uncompress it to a folder named DFRobot_DHT11. 
Download the zip file first to use this library and uncompress it to a folder named DFRobot_DHT11. 

## Methods

```C++

/*
 * @brief Read DHT11 data
 *
 * @param pin:
 *        Connect the IO port of the DHT11 data port
 */
  void read(int pin); 

## Compatibility

MCU                | Work Well | Work Wrong | Untested  | Remarks
------------------ | :----------: | :----------: | :---------: | -----
FireBeetle-ESP32  |             |       √     |            | 
FireBeetle-ESP8266  |      √       |             |            | 
Arduino uno |       √      |             |            | 

## History

- Sep 14, 2018 - Version 0.1 released.

## Credits

Written by Wuxiao, 2018. (Welcome to our [website](https://www.dfrobot.com/))
