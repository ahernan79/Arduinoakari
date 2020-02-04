boolean lightstate = 0;
int x = 0;
void setup()
{
 Serial.begin(9600);
 pinMode(3,INPUT_PULLUP); //holds photointerrupter at logic voltage until interrupted
 pinMode(6,OUTPUT);
 attachInterrupt(digitalPinToInterrupt(3), photo, RISING); //tells photointerrupter to interrupt when pin goes low to high
 attachInterrupt(digitalPinToInterrupt(3), photo, FALLING); //tells photointerrupter to interrupt when pin goes high to low
}
void loop()
{
if(lightstate == 1){ //adds to variable x every time interrupted
 	x++;
 }
 Serial.println(x); //prints times interrupted to monitor
 digitalWrite(6, lightstate); //prints on/off state to LED
 lightstate = 0; //resets on/off state to off
 delay(50);

}
void photo()
{
 lightstate = !lightstate;
}

 
