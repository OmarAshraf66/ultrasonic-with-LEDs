long t=0, d=0;

int trig=6;
int echo=7;
int led1=3;
int led2=5;
int led3=9;
int led4=10;
void setup() {
  
 pinMode(3,OUTPUT);
  Serial.begin(9600);
   pinMode(7,INPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
     
     
     
}

void loop() {
digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
   delayMicroseconds(10);
  digitalWrite(trig,LOW);
  t=pulseIn(echo,HIGH);
  d=(0.0343/2)*t;
  if (d<40){
    analogWrite(led1,LOW);
    delay(d);
  }
  else {
      analogWrite(led1,HIGH);
    delay(d);
  }
   if (d>60){
    analogWrite(led2,HIGH);
     delay(d);
  }
  else {
      analogWrite(led2,LOW);
    delay(d);
    
  }
   if (d>100){
    analogWrite(led3,HIGH);
     delay(d);
  }
  else {
      analogWrite(led3,LOW);
    delay(d);
}
   if (d>150){
    analogWrite(led4,HIGH);
     delay(d);
  }
  else {
      analogWrite(led4,LOW);
    delay(d);
}
}

   
    

    

  