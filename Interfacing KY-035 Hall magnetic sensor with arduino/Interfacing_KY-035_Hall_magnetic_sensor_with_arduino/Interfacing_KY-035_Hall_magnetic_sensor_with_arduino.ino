// Arduino and KY-035 module

void setup ()
{
Serial.begin(9600); // initialize serial
}

void loop ()
{
Serial.print(analogRead(A0)); // display analog and digital values to serial
}

//The analog value sent by the module will be displayed in the serial monitor. 
//A value from 0~128 means a negative magnetic polarity while value from 129~255 means a positive magnetic polarity.
