boolean lightstate = 0;
int x = 0;
void setup()
{
 Serial.begin(9600);
 pinMode(3,INPUT_PULLUP);
 pinMode(6,OUTPUT);
 attachInterrupt(digitalPinToInterrupt(3), photo, RISING);
 attachInterrupt(digitalPinToInterrupt(3), photo, FALLING);
}
void loop()
{
if(lightstate == 1){
 	x++;
 }
 Serial.println(x);
 digitalWrite(6, lightstate);
 lightstate = 0;
 delay(50);

}
void photo()
{
 lightstate = !lightstate;
}

 