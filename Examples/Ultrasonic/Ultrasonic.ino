/*
Ultrasonic Sensor type HC-SR04
Vcc and GND connected to 5v and GND
trigger pin connected to pin 3
echo pin connected to pin 4
getDistance() method returns the distance in cm
*/

#include <usSensor.h>

usSensor sensor(3,4);

void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println(sensor.getDistance());
  delay(150);
}
