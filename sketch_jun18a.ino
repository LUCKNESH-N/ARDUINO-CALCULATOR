int IN1=2;
int IN2=3;
int IN3=4;
int IN4=5;
int OUT1=6;
int OUT2=7;
int OUT3=8;
int OUT4=9;
int first;
int second;
int firstflag=0;
int secondflag=0;
signed int result;


void setup() {
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(OUT1,INPUT_PULLUP);
  pinMode(OUT2,INPUT_PULLUP);
  pinMode(OUT3,INPUT_PULLUP);
  pinMode(OUT4,INPUT_PULLUP);
  Serial.begin(9600);
 }

void loop() {
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,HIGH);
  if(digitalRead(OUT1)==LOW){
    if(firstflag==0)
    { 
      firstflag=1;
      first=0;
      Serial.println(10);
      delay(500);
    }
    else if(secondflag==0)
    {
      secondflag=1;
      second=0;
      Serial.println(20); 
      delay(500);
    }}

  else if(digitalRead(OUT2)==LOW){
    if(firstflag==0)
    { 
      firstflag=1;
      first=1;
      Serial.println(11);
      delay(500);
    }
    else if(secondflag==0)
    {
      secondflag=1;
      second=1;
      Serial.println(21); 
      delay(500);
    }}

  else if(digitalRead(OUT3)==LOW)
  {
    result=first+second;
    Serial.println(result);} 

  else if(digitalRead(OUT4)==LOW){
    result=first-second;
    Serial.println(result);
    }
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,HIGH);
  if(digitalRead(OUT1)==LOW)
    {
      firstflag=0;
      secondflag=0;
      first=0;
      second=0;
      result=0;
    }

}
