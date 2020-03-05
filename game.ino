int button1 = 3;
int button2 = 4;
int button3 = 4;
enum Game {
  BlinkGame
};

static Game game;
const int button1 = 3;
const int greenled = 4;
const int redled = 5;
const int rgbled1 = 6;
const int button2 = 7
int button1state = 0;
int button2state = 0;
const int rgbled2 = 8;
const int rgbled3 = 9;
long randomint = 0;
int rand = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600)
  game = BlinkGame;
  pinMode(greenled, OUTPUT)
  pinMode(redled, OUTPUT)
  pinMode(rgbled, OUTPUT)
  pinMode(button1, INPUT)
  pinMode(button2, INPUT)

}

void loop() {
  int buttonState1 = digitalRead(button1);
  int buttonState2 = digitalRead(button2);
  int buttonState3 = digitalRead(button3);

  
  // put your main code here, to run repeatedly:
  switch (game) {
    case BlinkGame:
      Serial.println("aaa");
      break;
    default:
      break;
  }
}

void blink_game(int btn1, int btn2, int btn3) {
  if (btn1 == HIGH) {
    while (digitalRead(button1 != HIGH)) 
  }
}
