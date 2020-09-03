int trigPin1=2;
int echoPin1=3;

int echoPin2=5;

int echoPin3=7;

int echoPin4=9;


void setup() {
  Serial.begin (9600);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(echoPin2, INPUT);
  pinMode(echoPin3, INPUT);
  pinMode(echoPin4, INPUT);
}

void loop() {
  long duration1, distance1;
  long duration2, distance2;
  long duration3, distance3;
  long duration4, distance4;
  

  digitalWrite(trigPin1, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);

  digitalWrite(trigPin1, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin1, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  digitalWrite(trigPin1, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin1, LOW);
  duration3 = pulseIn(echoPin3, HIGH);
  digitalWrite(trigPin1, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin1, LOW);
  duration4 = pulseIn(echoPin4, HIGH);
  

  
  distance1 = (duration1/2) / 29.1;
  distance2= (duration2/2) / 29.1; 
  distance3= (duration3/2) / 29.1;  
  distance4= (duration4/2) / 29.1;


String finopt = " " + String(distance1) + "   " + String(distance2) + "   " + String(distance3) + "   " + String(distance4);
Serial.println(finopt);
delay(10);
}
