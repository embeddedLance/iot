// author:       Casey Reas and Ben Fry
// description:  Use of fill,ellipse,random
//               Introduction to a class
//               Tweak by changing 22,23,24


Spot[] spots; // Declare array
void setup() {
  size(720, 100);
  int numSpots = 72; // Number of objects
  int dia = width/numSpots; // Calculate diameter
  spots = new Spot[numSpots]; // Create array
  for (int i = 0; i < spots.length; i++) {
    float x = dia/2 + i*dia;
    float rate = random(0.1, 2.0);
    // Create each object
    spots[i] = new Spot(x, 50, dia, rate);
  }
  noStroke();
}
void draw() {
  fill(0, 12);
  rect(0, 0, width, height);
  fill(255);
  for (int i=0; i < spots.length; i++) {
    spots[i].move(); // Move each object
    spots[i].display(); // Display each object
  }
}
class Spot {
  float x, y;         // X-coordinate, y-coordinate
  float diameter;     // Diameter of the circle
  float speed;        // Distance moved each frame
  int direction = 1;  // Direction of motion (1 is down, -1 is up)
  
  // Constructor
  Spot(float xpos, float ypos, float dia, float sp) {
    x = xpos;
    y = ypos;
    diameter = dia;
    speed = sp;
  }
    
  void move() {
    y += (speed * direction); 
    if ((y > (height - diameter/2)) || (y < diameter/2)) { 
      direction *= -1; 
    } 
  }
  
  void display() {
    ellipse(x, y, diameter, diameter);
  }
}
