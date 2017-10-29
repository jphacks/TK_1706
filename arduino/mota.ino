#include<Servo.h>
Servo servo1;
#define LED 13

void setup()  {
    pinMode(8, OUTPUT );
    pinMode(9, OUTPUT );
    pinMode(10, OUTPUT );
    pinMode(LED, OUTPUT); 
    servo1.attach(2);
}

void loop()  {

    digitalWrite(LED, HIGH);   // set the LED on
    
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    servo1.write(360);
    delay(1000);

    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    servo1.write(0);
    delay(1000);
}

