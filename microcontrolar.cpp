// C++ code
// Using Aurdino you can use this code
const int trigPin = 2;
const int echoPin = 3;
​
long duration;
double distance;
​
void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}
​
void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
​
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trigPin, LOW);
​
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" CM");
  
  if(distance>50)
    Serial.println("Safe zone: No Obstacles!");
  else
    Serial.println("Obstacle found: Alert!");
​
}
