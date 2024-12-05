// Pin Definitions
const int trigPin = 8;
const int echoPin = 9;

const int ENA = 3; // Speed control for Motor A
const int ENB = 5; // Speed control for Motor B
const int IN1 = 4; // Motor A direction
const int IN2 = 7;
const int IN3 = 6; // Motor B direction
const int IN4 = 10;

// Distance thresholds (in cm)
const int minDist = 10; // Minimum distance to move forward
const int maxDist = 20; // Maximum distance to stop

void setup() {
  // Ultrasonic sensor pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Motor control pins
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Initialize motors
  stopMotors();

  Serial.begin(9600); // For debugging
}

void loop() {
  int distance = measureDistance();

  Serial.println(distance); // Debugging

  if (distance > 0 && distance <= minDist) {
    moveForward();
  } else if (distance > minDist && distance <= maxDist) {
    stopMotors();
  } else if (distance > maxDist) {
    moveBackward();
  } else {
    stopMotors();
  }

  delay(100);
}

// Function to measure distance using the ultrasonic sensor
int measureDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2; // Convert to cm
  return distance;
}

// Function to move forward
void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 150); // Adjust speed as needed
  analogWrite(ENB, 150);
}

// Function to move backward
void moveBackward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENA, 150); // Adjust speed as needed
  analogWrite(ENB, 150);
}

// Function to stop motors
void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
}
