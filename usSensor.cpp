/*
Library for Ultrasonic sensor HC SR04
by Boris Kolev and Vladimir Dimov
vb-electronics.com

constructor:
usSensor(Trigger Pin, Echo Pin)
methods:
getDistance() returns the distance in cm,   integer type

*/

#include "Arduino.h"
#include "usSensor.h"

usSensor::usSensor(int trigPin, int echoPin)
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  _trigPin = trigPin;
  _echoPin = echoPin;
  _duration = 0;
  distance = 0;
}

int usSensor::getDistance()
{
	//clears the trigger pin
	digitalWrite(_trigPin, LOW);
	delayMicroseconds(2);
	// Sets the trigPin on HIGH state for 10 micro seconds
	digitalWrite(_trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(_trigPin, LOW);
	// Reads the echoPin, returns the sound wave travel time in microseconds
	_duration = pulseIn(_echoPin, HIGH);
	// Calculating the distance
	distance = _duration*0.034/2; 
	return(distance);
}
