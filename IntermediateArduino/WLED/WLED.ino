
#define WLED    11
int x = 255; //x is variable for brightness of LED, starts at highest brightness(255)
void setup() {
  pinMode(WLED, OUTPUT);
  Serial.begin(9600) ;
}

void loop() {
  for (x <= 0; x <= 255; x++) { //this for loop makes the LED get brighter when x is greater than 0 and less than 255
    analogWrite(WLED, x);
    delay(10);
      for (int i = 1; i < x/10; i = i + 1) { //prints dashes proportionate to brightness of led(x) divided by 10
    Serial.print("-");
  }
  Serial.println("");
  }
  for (x >= 255; x >= 0; x--) { //when c is greater than or equal to 255, LED gets dimmer
    analogWrite(WLED, x);
    delay(10);
      for (int i = 1; i < x/10; i = i + 1) { //prints number of dashes proportionate to brightness of LED
    Serial.print("-");     
  }
  Serial.println("");
  }

}
