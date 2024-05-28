const char ledCount = 6;
char pins[ledCount] = {3, 5, 6, 9, 10, 11};
const int LOW_BRIGHTNESS = 6;
const int HIGH_BRIGHTNESS = 255;
const int DEFAULT_DELAY = 140;
int DELAY = 140;

void setup() {
  for (char i = 0; i < 6; i++)
  {
    pinMode(pins[i], OUTPUT);
  }
}

void light (char number) {
  for (char i = 0; i < 6; i++) {
    if (i == number) {
      analogWrite(pins[i], HIGH_BRIGHTNESS);
      continue;
    }
    if (i == number - 1) {
      analogWrite(pins[i], LOW_BRIGHTNESS);
      continue;
    }
    if (i == number + 1) {
      analogWrite(pins[i], LOW_BRIGHTNESS);
      continue;
    }
    analogWrite(pins[i], 0);
  }

  delay(DELAY);
}

void loop() {
  for (char j = 0; j < ledCount - 1; j++) {
    light(j);
    DELAY -= 20;
  }
  DELAY = DEFAULT_DELAY;
  for (char j = ledCount - 1; j > 0; j--) {
    light(j);
    DELAY -= 20;
  }
  DELAY = DEFAULT_DELAY;
}
