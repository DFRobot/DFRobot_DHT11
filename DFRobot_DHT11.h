
#ifndef DFROBOT_DHT11_h
#define DFROBOT_DHT11_h

#if defined(ARDUINO) && (ARDUINO >= 100)
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

class DFRobot_DHT11
{
public:
    void read(int pin);
    int humidity;
    int temperature;
};
#endif
