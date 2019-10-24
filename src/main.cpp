#include <Arduino.h>
#include <Button.h>

Button btn(4);


void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  btn.loop();
  // put your main code here, to run repeatedly:
}