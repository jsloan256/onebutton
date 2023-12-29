#include <Keyboard.h>

void setup()
{
  pinMode(2, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
  Keyboard.begin();
}

void loop()
{
  if (digitalRead(2) == LOW)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    Keyboard.print(" ");
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
}