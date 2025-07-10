// ryoof almalki

#include <Servo.h>

Servo servoo0;
Servo servoo1;
Servo servoo2;
Servo servoo3;

void setup() {
  servoo0.attach(3);   
  servoo1.attach(5);
  servoo2.attach(7);
  servoo3.attach(9);
}

void loop() {
  
  for (int pos = 0; pos <= 180; pos++) {
    servoo0.write(pos);
    servoo1.write(pos);
    servoo2.write(pos);
    servoo3.write(pos);
    delay(12);  
  }

  
  servoo0.write(90);
  servoo1.write(90);
  servoo2.write(90);
  servoo3.write(90);

  
  while (true);
}