const int dialpin = A5; //potentiometer data pin
const int diodepin = A4; //diode data pin
int value;
void setup()
{
	pinMode(dialpin, INPUT);
	pinMode(diodepin, OUTPUT);
	
}

void loop()
{
 value = analogRead(dialpin);      //Read and save analog value from potentiometer
  analogWrite(diodepin, value);      	//Sends potentiometer value to motor
  delay(100);	

	delay(500);	
}

  
