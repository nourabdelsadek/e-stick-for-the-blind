const int trigPin1 = 9;
const int echoPin1 = 10;
const int trigPin2 = 11;
const int echoPin2 = 12;
const int trigPin3 = 13;
const int echoPin3 = 14;
const int buzzerPin = 3;
int distance1 , distance2 , distance3;
int getDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;
  return distance;
}
void setup() {
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);  
}
int mi(){
  return min(distance1 , min(distance2 , distance3));
  }
void loop() {
  distance1 = getDistance(trigPin1, echoPin1);
  distance2 = getDistance(trigPin2, echoPin2);
  distance3 = getDistance(trigPin3, echoPin3);
  int minDistance = mi();
  if (minDistance > 0 && minDistance <= 50) {
    int frequency = map(minDistance, 50, 0, 500, 2000); 
    tone(buzzerPin, frequency);
  } else {
    noTone(buzzerPin);
  }

  Serial.print("Sensor 1: "); Serial.print(distance1); Serial.print(" cm ");
  Serial.print("Sensor 2: "); Serial.print(distance2); Serial.print(" cm ");
  Serial.print("Sensor 3: "); Serial.print(distance3); Serial.print(" cm ");
  Serial.println();
  delay(100);
}
