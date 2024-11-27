//Microcontroller codes for arduino.

int GreenLed=7;
int RedLed=6;
int OrangeLed=5;
int BlueLed=4;


void setup()
{
  pinMode(GreenLed,OUTPUT);
  pinMode(RedLed,OUTPUT);
  pinMode(OrangeLed,OUTPUT);
  pinMode(BlueLed,OUTPUT);
}

void loop()
{
  digitalWrite(GreenLed,HIGH);
  delay(1000);
  digitalWrite(GreenLed,LOW);
  delay(1000);
  
  digitalWrite(RedLed,HIGH);
  delay(1000);
  digitalWrite(RedLed,LOW);
  delay(1000);
  
  digitalWrite(OrangeLed,HIGH);
  delay(1000);
  digitalWrite(OrangeLed,LOW);
  delay(1000);
  
  digitalWrite(BlueLed,HIGH);
  delay(1000);
  digitalWrite(BlueLed,LOW);
  delay(1000);
  
}

