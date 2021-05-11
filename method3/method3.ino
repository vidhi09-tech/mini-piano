#define NOTE_A 262
#define NOTE_B 294
#define NOTE_C 330
#define NOTE_D 349
#define NOTE_E 392
#define NOTE_F 440
#define NOTE_G 494
#define NOTE_H 515


#define ACTIVATED LOW 

const int PIEZO = 8;


const int BUTTON_A = A0;
const int BUTTON_B = A1;
const int BUTTON_C = A2;
const int BUTTON_D = A3;
const int BUTTON_E = A4;
const int BUTTON_F = A5;
const int BUTTON_G = 4;
const int BUTTON_H = 7;



void setup()
{
  
  pinMode(BUTTON_A, INPUT);

  pinMode(BUTTON_B, INPUT);

  pinMode(BUTTON_C, INPUT);
 
  pinMode(BUTTON_D, INPUT);
 
  pinMode(BUTTON_E, INPUT);
  
  pinMode(BUTTON_F, INPUT);
 
  pinMode(BUTTON_G ,INPUT);
 
  pinMode(BUTTON_H ,INPUT);
 

}

void loop()
{
  if(digitalRead(BUTTON_A) == 1)
  {
    tone(PIEZO,NOTE_A,100);
    setColour(255,0,0);//RED
  }
  if(digitalRead(BUTTON_B) == 1)
  {
    tone(PIEZO,NOTE_B,100);
    setColour(0,255,0);//GREEN
  }
if(digitalRead(BUTTON_C) == 1)
  {
    tone(PIEZO,NOTE_C,100);
    setColour(0,0,255);//BLUE
  }
if(digitalRead(BUTTON_D) == 1)
  {
    tone(PIEZO,NOTE_D,100);
    setColour(255,255,125);//RASPBERRY
  }
if(digitalRead(BUTTON_E) == 1)
  {
    tone(PIEZO,NOTE_E,100);
    setColour(255,0,255);//MAGENTA
  }
if(digitalRead(BUTTON_F) == 1)
  {
    tone(PIEZO,NOTE_F,100);
    setColour(225,255,0);//YELLOW
  }
  if(digitalRead(BUTTON_G) == 1)
  {
    tone(PIEZO,NOTE_G,100);
    setColour(0,255,255);//AQUA
   
  }
if(digitalRead(BUTTON_H) == 1)
  {
    tone(PIEZO,NOTE_H,100);
    setColour(255,255,255);//WHITE
    
  }
  delay(5);
}
void  setColour(int redValue, int greenValue, int blueValue){
  analogWrite(11,redValue);
  analogWrite(10,greenValue);
  analogWrite(9,blueValue);
  //delay(50);


}
