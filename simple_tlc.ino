// pin assignment of LEDs
// Color RED will be connected to pin 2 and so on
const int RED    = 2;
const int YELLOW = 1;
const int GREEN  = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // RED is ON
  digitalWrite(RED, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, LOW);
  // Wait fo 10s
  delay(10000);
   
  // GREEN is ON
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, HIGH);
  // wait 10s
  delay(10000);

  // YELLOW is ON
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(GREEN, LOW);
  // wait 3s
  delay(3000); 

}
