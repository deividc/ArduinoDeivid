int pot = A0;
int led5 = 13;
int led4 = 12;
int led3 = 11;
int led2 = 10;
int led1 = 9;

void ledController (int, int);
void turnLedsOnOff(int);

void setup () {
  pinMode(pot, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  Serial.begin(9600);
}

void loop () {
  ledController(pot, 1000);
}

void ledController (int pinSensor, int timeBetweenReads) {
  int valueSensor = analogRead(pinSensor);
  float temp = valueSensor / 5.689;
  turnLedsOnOff(0); // turn all leds off
  if (temp < 25) {
    digitalWrite(led1, HIGH);
  }
  else if (temp >= 25 && temp < 26) {
    digitalWrite(led2, HIGH);
  }
  else if (temp >= 26 && temp < 27) {
    digitalWrite(led3, HIGH);
  }
  else if (temp >= 26 && temp < 28) {
    digitalWrite(led4, HIGH);
  }
  else if (temp > 28) {
    digitalWrite(led5, HIGH);
  }
  delay(timeBetweenReads);
}

void turnLedsOnOff(int state) {
  if (state == 0) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
  } else {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
  }
}
