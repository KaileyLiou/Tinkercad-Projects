// C++ code
//
int speed = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  speed = 400;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(speed); // Wait for speed millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(speed); // Wait for speed millisecond(s)
  digitalWrite(13, HIGH);
  delay(speed); // Wait for speed millisecond(s)
  digitalWrite(13, HIGH);
  delay(speed); // Wait for speed millisecond(s)
  digitalWrite(12, HIGH);
  delay(speed); // Wait for speed millisecond(s)
  digitalWrite(12, HIGH);
  delay(speed); // Wait for speed millisecond(s)
}