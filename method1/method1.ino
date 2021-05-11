#define T_C 262
#define T_D 294
#define T_E 330
#define T_F 349
#define T_G 392
#define T_A 440
#define T_B 493
#define T_H 515

const int C = 12;
const int D = 8;
const int E = 7;
const int F = 5;
const int G = 4;
const int A = 3;
const int B = 2;
const int H = 1;

const int Buzz = 11;
int red_light_pin= 10;
int green_light_pin = 9;
int blue_light_pin = 6;

void setup()
{
  
  pinMode(C, INPUT);
  digitalWrite(C,HIGH);
  
  pinMode(D, INPUT);
  digitalWrite(D,HIGH);
  
  pinMode(E, INPUT);
  digitalWrite(E,HIGH);
  
  pinMode(F, INPUT);
  digitalWrite(F,HIGH);
  
  pinMode(G, INPUT);
  digitalWrite(G,HIGH);
  
  pinMode(A, INPUT);
  digitalWrite(A,HIGH);
  
  pinMode(B, INPUT);
  digitalWrite(B,HIGH);
  pinMode(H, INPUT);
  digitalWrite(H,HIGH);
  
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);

   
}
void setColour(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}
void loop()
{
 while(digitalRead(C) == LOW)
  {
    tone(Buzz,T_C);
    setColour(255,0,0);//RED
  }

  while(digitalRead(D) == LOW)
  {
    tone(Buzz,T_D);
    setColour(0,255,0);//GREEN
  }

  while(digitalRead(E) == LOW)
  {
    tone(Buzz,T_E);
    setColour(0,0,255);//BLUE
  }

  while(digitalRead(F) == LOW)
  {
    tone(Buzz,T_F);
    setColour(255,255,125);//RASPBERRY
  }

  while(digitalRead(G) == LOW)
  {
    tone(Buzz,T_G);
    setColour(255,0,255);//MAGENTA
  }

  while(digitalRead(A) == LOW)
  {
    tone(Buzz,T_A);
     setColour(225,255,0);//YELLOW
  }

  while(digitalRead(B) == LOW)
  {
    tone(Buzz,T_B);
     setColour(0,255,255);//AQUA
  }
  while(digitalRead(H) == LOW)
  {
    tone(Buzz,T_H);
     setColour(60,45,80);
  }

  noTone(Buzz);
  setColour(255,255,255);//WHITE

}
