

int x = 5;
int LED = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(x, INPUT);

  pinMode(LED, OUTPUT);

  #pinMode(buzzer, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:

  int  y = digitalRead(x);

  if (y == 1)
  {
    digitalWrite(LED, LOW);
    #digitalWrite(buzzer, LOW);
  }
  else
  {
    digitalWrite(LED, HIGH);
  #  digitalWrite(buzzer, HIGH);
  }
}
