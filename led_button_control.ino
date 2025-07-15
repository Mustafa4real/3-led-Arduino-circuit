// Pin definitions
const int button1 = 2;
const int button2 = 3;
const int button3 = 4;

const int redLED = 8;
const int greenLED = 9;
const int blueLED = 10;

void setup() {
  // Set button pins as input
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);

  // Set LED pins as output
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void loop() {
  // Read button states
  int state1 = digitalRead(button1);
  int state2 = digitalRead(button2);
  int state3 = digitalRead(button3);

  // Control LEDs based on button states
  digitalWrite(redLED, state1);
  digitalWrite(greenLED, state2);
  digitalWrite(blueLED, state3);
}
