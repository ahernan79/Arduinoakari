# Arduinoakari
All my Arduino engineering assignments.

## Not So Basic Arduino
These were the assignments I did at the beginning of the 2019-2020 school year, before the ultrasonic robot.

Assignments: Hello Functions and New Ping

### Hello Functions
Function: Uses returning value from an ultrasonic sensor to move a servo an amount based on distance returned by sensor. Prints distance to serial monitor.

What I learned: How to code an ultrasonic sensor as well as improving my skills making one function occur based on the returns of another(this came in handy doing projects like potentiometers later).

Challenges: I struggled with servo movement a little but fixing my math splitting the value return into degrees of movement fixed the problem.

Code: https://github.com/ahernan79/Arduinoakari/blob/master/NotSoBasicArduino/Hellofunctions/Hellofunctions.ino

Wiring: ![]()

### New Ping
Function: Uses a HC-SR04 ultrasonic sensor to do something. For my assignment I printed distance from the sensor to the serial monitor every time a button was pressed.

What I learned: I got some more practice using the ultrasonic sensor.

Challenges: The code and wiring was pretty simple, this was a rather easy assignment and I didn't have much trouble.

Code: https://github.com/ahernan79/Arduinoakari/blob/master/NotSoBasicArduino/Newping/newping2.ino

Wiring: ![]()

## Intermediate Arduino
These were the assignments that were split between before and after the ultrasonic robot project.

Assignments: LED Blink Revisited, Hello LCD, LCD Backpack, Photointerrupters, Potentiometers, and Motor Control.

### LED Blink Revisited
Function: Made an LED fade in and out and printed a number of "x" to the serial monitor based on the brightness.

What I learned: This was one of my first Arduino assignments in this class so this was my reintroduction to Arduino after Engineering 1, so I re-learned a lot of coding.

Challenges: I struggled a lot getting the serial monitor component to work without a ton of code but some help from the teacher got me there.

Code: https://github.com/ahernan79/Arduinoakari/blob/master/IntermediateArduino/WLED/WLED.ino

Wiring: ![LED Blink Revisited](https://github.com/ahernan79/Arduinoakari/blob/master/WLED1.PNG?raw=true)

### Hello LCD
Function: Printed "hello world" and the number of seconds since the program began to an LCD screen.

What I learned: How to wire and code an LCD screen, which was a new challenge.

Challenges:I had some trouble getting the secondsprint correctly to the LCD screen, but replacing the LCD fixed it. My computer also had some errors downloading the library so I had to remove and reinstall it once or twice.

Code:https://github.com/ahernan79/Arduinoakari/blob/master/IntermediateArduino/HelloLCD/HelloLCD.ino

Wiring: ![hellolcdfritzing](https://github.com/vcraghe32/Intermediate_Arduino/raw/master/Images/lcd_wiring_no_backpack.JPG)

### LCD Backpack
Function: Made the LCD functional without a lot of wiring through a breadboard, printed number of times a button was pressed to the LCD screen, and used a switch to add and subtract to that number based on the position the switch was in when the button was pressed.

What I learned: I learned how to use the LiquidCrystal I2C commands.

Challenges: I had a lot of trouble with faulty wiring but some hard work going over everything eventually fixed it.

Code: https://github.com/ahernan79/Arduinoakari/tree/master/IntermediateArduino/LCDBackpack

Wiring: ![lcdbacpackfritzing](https://github.com/vcraghe32/Intermediate_Arduino/raw/master/Images/lcdbackpackwiring.JPG)

### Photointerrupters
Function: Turned a LED off whenever something passed between the legs of a photointerrupter.

What I learned: How to work with the photointerrupter commands/functions.

Challenges: I had some trouble getting the attach interrupt functions right because I couldn't figure out how to use the functions.

Code:https://github.com/ahernan79/Arduinoakari/blob/master/IntermediateArduino/PhotoInterrupters/Photointerrupters.ino

Wiring: ![photointerrupters](https://github.com/vcraghe32/Intermediate_Arduino/raw/master/Images/photointerrupterwiring.JPG)

### Potentiometers
Function: Changed brightness of an LED based on output from a potentiometer.

What I learned:I learned how to work with analog pins and commands.

Challenges: I struggled with using the map command to make the light get dimmer as the value went down instead of brighter but some trial and error eventually fixed it. I also had a weird issue with the LCD only showing one character on each line but it resolved itself.

Code:https://github.com/ahernan79/Arduinoakari/blob/master/IntermediateArduino/Potentiometers/Potentiometers.ino

Wiring: ![potentiometers fritzing](https://github.com/vcraghe32/Intermediate_Arduino/raw/master/Images/potentiowiring.JPG)

### Motor Control
Function: Turns on a motor and changes speed of which the motor moves based on output from a potentiometer.

What I learned: How to code a potentiometer to interact with a motor and how to wire a motor with diodes and all.

Challenges: The code was really simple because it was just a small change from the potentiometers assignments, but the wiring took me several class periods to recreate and I struggled making sure everything was connected correctly.

Code:https://github.com/ahernan79/Arduinoakari/blob/master/IntermediateArduino/Motor%20Control/Motor%20Control.ino

Wiring: ![motor control fritzing](https://github.com/vcraghe32/Intermediate_Arduino/raw/master/Images/motorcontrolwiring.JPG)
