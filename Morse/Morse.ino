int dotMorse(int, int);
int dashMorse(int, int);
void codifier(char, int, int);

int pin9 = 9;

void setup()
{
  pinMode(pin9, OUTPUT);
}

void loop()
{
  codifier('s', pin9, 500);
  codifier('o', pin9, 500);
  codifier('s', pin9, 500);
}

int dotMorse(int numberPin, int timePause)
{
  digitalWrite(numberPin, HIGH);
  delay(timePause);
  digitalWrite(numberPin, LOW);
  delay (timePause);
}

int dashMorse(int numberPin, int timePause)
{
  digitalWrite(numberPin, HIGH);
  delay(timePause * 2);
  digitalWrite(numberPin, LOW);
  delay (timePause);
}

void codifier(char c, int numberPin, int timePause)
{
  delay(timePause);
  if (c == 'a')
  {
    dotMorse(numberPin, timePause);
    dashMorse(numberPin, timePause);
  }
  else if (c == 'b')
  {
    dashMorse(numberPin, timePause);
    dotMorse(numberPin, timePause);
    dotMorse(numberPin, timePause);
    dotMorse(numberPin, timePause);
  }
  else if (c == 'c')
  {
    dashMorse(numberPin, timePause);
    dotMorse(numberPin, timePause);
    dashMorse(numberPin, timePause);
    dotMorse(numberPin, timePause);
  }
  else if (c == 'd')
  {
    dashMorse(numberPin, timePause);
    dotMorse(numberPin, timePause);
    dotMorse(numberPin, timePause);
  }
  else if (c == 'e')
  {
    dotMorse(numberPin, timePause);
  }
  else if (c == 'o')
  {
    dashMorse(numberPin, timePause);
    dashMorse(numberPin, timePause);
    dashMorse(numberPin, timePause);
  }
  else if (c == 's')
  {
    dotMorse(numberPin, timePause);
    dotMorse(numberPin, timePause);
    dotMorse(numberPin, timePause);
  }
  
  delay(timePause);
}
