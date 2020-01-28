
#define WLED    11
int x = 255;
void setup() {
  // put your setup code here, to run once:
  pinMode(WLED, OUTPUT);
  Serial.begin(9600) ;
}

void loop() {
  // put your main code here, to run repeatedly:
  for (x <= 0; x <= 255; x++) {
    analogWrite(WLED, x);
    delay(10);
      for (int i = 1; i < x/10; i = i + 1) {
    Serial.print("-");
  }
  Serial.println("");
  }
  for (x >= 255; x >= 0; x--) {
    analogWrite(WLED, x);
    delay(10);
      for (int i = 1; i < x/10; i = i + 1) {
    Serial.print("-");     
  }
  Serial.println("");
  }

}
