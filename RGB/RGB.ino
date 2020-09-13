int LEDR = 1;
int LEDG = 22;
int LEDB = 23;
void setup() {
  // put your setup code here, to run once:
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);
  Serial.begin(9600);
  delay(100);
  Serial.println("Inicie :D");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LEDR, HIGH);
  digitalWrite(LEDG, LOW);
  digitalWrite(LEDB, LOW);
  delay(1000);
  digitalWrite(LEDR, LOW);
  digitalWrite(LEDG, HIGH);
  digitalWrite(LEDB, LOW);
  delay(1000);
  digitalWrite(LEDR, LOW);
  digitalWrite(LEDG, LOW);
  digitalWrite(LEDB, HIGH);
  delay(1000);
}
