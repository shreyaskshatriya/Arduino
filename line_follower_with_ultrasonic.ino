void setup() 
{
  //left ir data
  pinMode(22, INPUT);
  //right ir data
  pinMode(23, INPUT);
  //ic pin 7
  pinMode(4, OUTPUT);
  //ic pin 2
  pinMode(5, OUTPUT);
  //ic pin 10
  pinMode(6, OUTPUT);
  //ic pin 15
  pinMode(7, OUTPUT);
}

void loop() 
{
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
      digitalWrite(7, HIGH);
    }
    if(digitalRead(22)==1 && digitalRead(23)==0)
    {
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
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
