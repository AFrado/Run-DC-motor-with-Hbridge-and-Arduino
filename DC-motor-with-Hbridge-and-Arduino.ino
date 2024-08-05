// Define the motor control pins
const int motorPin1 = 7; // IN1
const int motorPin2 = 8; // IN2
const int enablePin = 9; // EN

void setup() {
  // Set the motor control pins as outputs
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(enablePin, OUTPUT);
  
  // Initialize the motor in a stopped state
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  analogWrite(enablePin, 0);
}

void loop() {
  // Run the motor forward at full speed
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  analogWrite(enablePin, 255);
  delay(2000); // Run forward for 2 seconds

  // Stop the motor
  analogWrite(enablePin, 0);
  delay(1000); // Stop for 1 second

  // Run the motor forward at full speed
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  analogWrite(enablePin, 255);
  delay(2000); // Run backward for 2 seconds

  // Stop the motor
  analogWrite(enablePin, 0);
  delay(1000); // Stop for 1 second
}
