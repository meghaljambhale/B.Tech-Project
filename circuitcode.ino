// C++ code
void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop()
{
  int touchstatus=digitalRead(A0);
  if(touchstatus<575 && touchstatus>0){
  	digitalWrite(10,HIGH);
  }
  else{
    digitalWrite(10,LOW);
  }
  delay(3000);

  if(touchstatus<125 && touchstatus>0){
    digitalWrite(9,HIGH);
  }
  else{
    digitalWrite(9,LOW);
  }
  delay(3000);
  
  if(touchstatus<82 && touchstatus>0){
    digitalWrite(8,HIGH);
  }
  else{
    digitalWrite(8,LOW);
  }
  delay(3000);
}