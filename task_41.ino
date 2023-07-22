// C++ code
//
int switchPin1=7;
int switchPin2=13;
void setup()
{
  pinMode(9,OUTPUT);
   pinMode(11,OUTPUT);
   pinMode(3,OUTPUT);
 pinMode(5,OUTPUT);
   pinMode(13,INPUT);
  pinMode(7,INPUT);
}

void loop()
{
  if(digitalRead(switchPin2)==1){
    analogWrite(3,128);
    analogWrite(5,128);
    delay(250);}
     else{
       analogWrite(3,0);
       analogWrite(5,0);
     delay(250);}
  
 
  if(digitalRead(switchPin1)){
    digitalWrite(9,HIGH);
  }
  else {
    digitalWrite(9,LOW);
    
  }
  if(digitalRead(switchPin1)){
    digitalWrite(11,HIGH);
  }
  else {
    digitalWrite(11,LOW);
  }
  
  }