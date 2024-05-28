enum LED_PINS {PIN_1 = 1, PIN_2, PIN_3, PIN_4, PIN_5, PIN_6, PIN_7, PIN_8, LENGTH};

void setup()
{
  for (int i = 1; i < LED_PINS::LENGTH; i++)
  {
    pinMode(static_cast<LED_PINS>(i), OUTPUT);
  }
  initialize();
  clear();
}

void loop()
{
  delay(600);
  showNumber(0);
  for (char i = 1; i <= 9; i++)
  {
    delay(600);
    showNumber(i);
  }
}

void clear()
{
  for (int i = 1; i < LED_PINS::LENGTH; i++)
  {
    digitalWrite(static_cast<LED_PINS>(i), LOW);
  }
}

void initialize()
{
  for (int i = 1; i < LED_PINS::LENGTH; i++)
  {
    digitalWrite(static_cast<LED_PINS>(i), HIGH);
    delay(100);
  }
}

void showNumber(char number)
{
  clear();

  if (number == 0)
  {
    digitalWrite(LED_PINS::PIN_6, HIGH);
    digitalWrite(LED_PINS::PIN_7, HIGH);
    digitalWrite(LED_PINS::PIN_8, HIGH);
    digitalWrite(LED_PINS::PIN_2, HIGH);
    digitalWrite(LED_PINS::PIN_3, HIGH);
    digitalWrite(LED_PINS::PIN_4, HIGH);
  }

  if (number == 1)
  {
    digitalWrite(LED_PINS::PIN_8, HIGH);
    digitalWrite(LED_PINS::PIN_2, HIGH);
  }

  if (number == 2)
  {
    digitalWrite(LED_PINS::PIN_7, HIGH);
    digitalWrite(LED_PINS::PIN_8, HIGH);
    digitalWrite(LED_PINS::PIN_5, HIGH);
    digitalWrite(LED_PINS::PIN_4, HIGH);
    digitalWrite(LED_PINS::PIN_3, HIGH);
  }

  if (number == 3)
  {
    digitalWrite(LED_PINS::PIN_7, HIGH);
    digitalWrite(LED_PINS::PIN_8, HIGH);
    digitalWrite(LED_PINS::PIN_5, HIGH);
    digitalWrite(LED_PINS::PIN_2, HIGH);
    digitalWrite(LED_PINS::PIN_3, HIGH);
  }

  if (number == 4)
  {
    digitalWrite(LED_PINS::PIN_6, HIGH);
    digitalWrite(LED_PINS::PIN_5, HIGH);
    digitalWrite(LED_PINS::PIN_8, HIGH);
    digitalWrite(LED_PINS::PIN_2, HIGH);
  }

  if (number == 5)
  {
    digitalWrite(LED_PINS::PIN_7, HIGH);
    digitalWrite(LED_PINS::PIN_6, HIGH);
    digitalWrite(LED_PINS::PIN_5, HIGH);
    digitalWrite(LED_PINS::PIN_2, HIGH);
    digitalWrite(LED_PINS::PIN_3, HIGH);
  }

  if (number == 6)
  {
    digitalWrite(LED_PINS::PIN_7, HIGH);
    digitalWrite(LED_PINS::PIN_6, HIGH);
    digitalWrite(LED_PINS::PIN_4, HIGH);
    digitalWrite(LED_PINS::PIN_3, HIGH);
    digitalWrite(LED_PINS::PIN_2, HIGH);
    digitalWrite(LED_PINS::PIN_5, HIGH);
  }

  if (number == 7)
  {
    digitalWrite(LED_PINS::PIN_7, HIGH);
    digitalWrite(LED_PINS::PIN_8, HIGH);
    digitalWrite(LED_PINS::PIN_2, HIGH);
  }

  if (number == 8)
  {
    digitalWrite(LED_PINS::PIN_6, HIGH);
    digitalWrite(LED_PINS::PIN_7, HIGH);
    digitalWrite(LED_PINS::PIN_8, HIGH);
    digitalWrite(LED_PINS::PIN_2, HIGH);
    digitalWrite(LED_PINS::PIN_3, HIGH);
    digitalWrite(LED_PINS::PIN_4, HIGH);
    digitalWrite(LED_PINS::PIN_5, HIGH);
  }

  if (number == 9)
  {
    digitalWrite(LED_PINS::PIN_6, HIGH);
    digitalWrite(LED_PINS::PIN_7, HIGH);
    digitalWrite(LED_PINS::PIN_8, HIGH);
    digitalWrite(LED_PINS::PIN_5, HIGH);
    digitalWrite(LED_PINS::PIN_2, HIGH);
    digitalWrite(LED_PINS::PIN_3, HIGH);
  }
}