#include <Arduino.h>
#include <Button.h>

bool pressed = false;
int pin;

Button::Button(int pin)
{
    this->pin = pin;
    pinMode(pin, INPUT_PULLUP);
}
void Button::loop()
{
    if (digitalRead(pin) == HIGH)
    {
        this->pressed = false;
    }

    else if (digitalRead(pin) == LOW && this->pressed == false)
    {
        this->pressed = true;
        Serial.println("btn pressed");
    }
}