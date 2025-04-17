
int enA = 6; // Enable pin for Motor A
int in1 = 5; // Input pin 1 for Motor A (clockwise)
int in2 = 3; // Input pin 2 for Motor A

int enB = 2; // Enable pin for Motor B
int in3 = 4; // Input pin 1 for Motor B (anti-clockwise)
int in4 = 7; // Input pin 2 for Motor B

void setup() {
  // Set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {
  // Rotate Motor A clockwise
  digitalWrite(in1, HIGH); // Set direction for Motor A
  digitalWrite(in2, LOW);
  
  analogWrite(enA, 255); // Set speed for Motor A (max speed)

  // Rotate Motor B anti-clockwise
  digitalWrite(in3, LOW); // Set direction for Motor B
  digitalWrite(in4, HIGH);
  
  analogWrite(enB, 255); // Set speed for Motor B (max speed)

  delay(10000); // Run both motors for 10 seconds

  // Stop both motors after running
  analogWrite(enA, 0);
  analogWrite(enB, 0);

  while(true); // Stop further execution of the loop after one operation
}
