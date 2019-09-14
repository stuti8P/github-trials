#include <Arduino.h>
#include <Servo.h>
//const int servopin= 4;
Servo servo;
void setup()
{
  Serial.begin(9600);
  Serial.println("pining the servo");
 
}
void loop()
{//int degree=0;

for(int degree=0;degree<=180;degree++)
{ servo.write(degree);
  Serial.println(degree);
  delay(20);
}
for(int degree=180;degree>=180;degree--)
{ servo.write(degree);
  Serial.println(degree);
  delay(20);
}

}