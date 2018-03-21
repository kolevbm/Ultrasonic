/*
Library for Ultrasonic sensor HC SR04
by Boris Kolev and Vladimir Dimov
vb-electronics.com

constructor:
usSensor(Trigger Pin, Echo Pin)
methods:
getDistance() returns the distance in cm,   integer type

*/

#ifndef usSensor_h
#define usSensor_h

#include "Arduino.h"

class usSensor
{
  public:
    usSensor(int echoPin, int trigPin);
    int getDistance();
	int distance;
  private:
    int _echoPin;
    int _trigPin;
	long _duration;
};

#endif

