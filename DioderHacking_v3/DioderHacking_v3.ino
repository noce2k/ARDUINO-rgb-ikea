// ---------------------------------------------------------
// Ikea RGB Dioder Hacking
// Credits: Roberto Nocera
// http://twitter.com/noce2k
// http://about.me/noce2k
// 
// Basic sketch to attach the RGB IKEA Dioder to an Arduino
// ---------------------------------------------------------
 
#define REDPIN A5
#define GREENPIN A4
#define BLUEPIN A3


// Color arrays
int black[3]  = { 0, 0, 0 };
int white[3]  = { 100, 100, 100 };
int red[3]    = { 100, 0, 0 };
int green[3]  = { 0, 100, 0 };
int blue[3]   = { 0, 0, 100 };
int yellow[3] = { 40, 95, 0 };
int dimWhite[3] = { 30, 30, 30 };

void setup() {
  Serial.begin(9600); 
  Serial.println("setup...");
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);
  
}

    
void loop() {
  
  int currentColor[3]   = { 0, 0, 255 };

  currentColor[0]  = 255;
  currentColor[1]  = 255;
  currentColor[2]  = 0;
  Blinking(currentColor, 100);
}


void Blinking(int color[3], int freq)
{
  analogWrite(REDPIN, color[0]);
  analogWrite(GREENPIN, color[1]);
  analogWrite(BLUEPIN, color[2]);
  delay(freq);
  Serial.println("Off...");
  analogWrite(REDPIN, 255);
  analogWrite(GREENPIN, 0);
  analogWrite(BLUEPIN, 0);
  delay(freq);

}




