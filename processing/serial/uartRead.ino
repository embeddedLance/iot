// author: Hasan Ijaz
// description: Open Serial port to read hex values
import processing.serial.*;

void setup()
{
  String portName = Serial.list()[0];
  serial0 = new Serial(this, portName, 9600);
  println(portName);
}

void draw()
{

  if(serial0.available() > 0)
  {
    ch = serial0.read();
    //ch = serial0.readStringUntil('\n');         // read it and store it in val
    print(ch);
  }
  
}
