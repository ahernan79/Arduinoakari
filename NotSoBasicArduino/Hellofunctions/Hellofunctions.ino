#include <Servo.h>
const int trigPin = 10;
const int echoPin = 9;
int duration;
int distance;
Servo myservo;
void setup()
{
 pinMode(echoPin, INPUT);
 pinMode(trigPin, OUTPUT);
 Serial.begin(9600);
 myservo.attach(2);
}
void loop()
{
 Serial.print("distance:"); // prints word "distance" to serial
 Serial.println(distance); //prints distance value returning from sensor
 getDistance(); //gets value returning from sensor
 myservo.write(78); //moves servo to what looks like 0 with the actual servo
  if (distance <= 10) //if distance returning from sensor is less or equal to ten, move servo 180 degrees
  {
   myservo.write(180);
  }
 
}
int getDistance() //codes for above use of getDistance function which gets data from the sensor
{
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin, HIGH);
distance = duration * (0.034)/2;
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
 return distance;
}
