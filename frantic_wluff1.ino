// C++ code
//
int switchPin1=4;
int switchPin2=3;
void setup()
{
  pinMode(13,OUTPUT);
   pinMode(11,OUTPUT);
   pinMode(8,OUTPUT);
 pinMode(5,OUTPUT);
   pinMode(4,INPUT);
  pinMode(3,INPUT);
}

void loop()
{
  if(digitalRead(switchPin1)){
    digitalWrite(13,HIGH);
  }
  else {
    digitalWrite(13,LOW);
  }
  if(digitalRead(switchPin1)){
    digitalWrite(11,HIGH);
  }
  else {
    digitalWrite(11,LOW);
  }
  if(digitalRead(switchPin2)){
    digitalWrite(8,HIGH);
  }
  else {
    digitalWrite(8,LOW);
  }
  if(digitalRead(switchPin2)){
    digitalWrite(5,HIGH);
  }
  else {
    digitalWrite(5,LOW);
  }
  
  
  
  
  
  
  
}