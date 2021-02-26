const int trigPin = 3;
const int echoPin = 2;
const int led = 8;
float duration,distance;
int in1 = 0;
int in2 = 1;


void setup() {
  // put your setup code here, to run once:
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
}

void TurnMotorA(){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
}

void TurnOFFA(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration*.0343)/2;
if(distance <= 8 )//input ur distance here
{
  TurnMotorA();
}
else{
  TurnOFFA();
  delay(500);
}

}
