// C++ code
//
int switchPin1=4;
int switchPin2=3;
void setup()
{
  pinMode(13,OUTPUT);
   pinMode(11,OUTPUT);
   pinMode(10,OUTPUT);
 pinMode(5,OUTPUT);
   pinMode(4,INPUT);
  pinMode(3,INPUT);
}

void loop()
{
  if(digitalRead(switchPin2)==1){
    analogWrite(10,128);
    analogWrite(5,128);
    delay(250);}
     else{
       analogWrite(10,0);
       analogWrite(5,0);
     delay(250);}
  
 
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
  
  }
  
  
  
  
  
  
  
  
  
