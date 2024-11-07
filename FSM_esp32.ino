int buttonPin = 12;
bool buttonPressed = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(115200);
  attachInterrupt(buttonPin, handleButtonPress, FALLING);
}

void loop() {
  // put your main code here, to run repeatedly:
  switch(buttonPressed) {
    case true:
      Serial.println("active");
      break;
    case false: 
      Serial.println("sleeping");
      break;
    default:
      break;
  }
  delay(1000);
}

void handleButtonPress() {
  buttonPressed = !buttonPressed;
}
