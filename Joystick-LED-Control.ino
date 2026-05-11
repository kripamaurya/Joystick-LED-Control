int xPin = A0;
int yPin = A1;

int rightLED = 2;
int leftLED  = 3;
int upLED    = 4;
int downLED  = 5;

void setup() {

  pinMode(rightLED, OUTPUT);
  pinMode(leftLED, OUTPUT);
  pinMode(upLED, OUTPUT);
  pinMode(downLED, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  int xValue = analogRead(xPin);
  int yValue = analogRead(yPin);

  // Sab LEDs OFF
  digitalWrite(rightLED, LOW);
  digitalWrite(leftLED, LOW);
  digitalWrite(upLED, LOW);
  digitalWrite(downLED, LOW);

  // RIGHT
  if (xValue > 700) {
    digitalWrite(rightLED, HIGH);
  }

  // LEFT
  else if (xValue < 300) {
    digitalWrite(leftLED, HIGH);
  }

  // UP
  else if (yValue > 700) {
    digitalWrite(upLED, HIGH);
  }

  // DOWN
  else if (yValue < 300) {
    digitalWrite(downLED, HIGH);
  }

  // CENTER = sab OFF

  delay(50);
}