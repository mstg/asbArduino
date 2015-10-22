const int potPin = 0;
const int maxPotVal = 1023;
int currVal = 0;
float currValP = 0.00;

void setup() {
  Serial.begin(9600);
}

void loop() {
  currVal = analogRead(potPin);
  currValP = currVal * 0.1023;
  currValP = min(currValP, 100);

  if (currValP < 10.00) {
    currValP = 10.00;
  }

  int currValPint = roundf(currValP);
  Serial.println(currValPint);

  delay(50);
}
