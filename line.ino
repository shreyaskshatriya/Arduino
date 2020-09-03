void setup() 
{
  pinMode(52, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, INPUT);
  pinMode(22, INPUT);
  pinMode(23, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() 
{
  digitalWrite(52, HIGH);
  int duration, distance;
  digitalWrite(11, HIGH);
  delayMicroseconds(50);
  digitalWrite(11, LOW);
  duration = pulseIn(12, HIGH);
  distance = duration * 0.034 / 2;
  
 
    if(digitalRead(22)==1 && digitalRead(23)==1)
    {
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
    }
    if(digitalRead(22)==0 && digitalRead(23)==1)
    {
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
    }
    if(digitalRead(22)==1 && digitalRead(23)==0)
    {
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
    }
    if(digitalRead(22)==0 && digitalRead(23)==0)
    {
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
    }

}
