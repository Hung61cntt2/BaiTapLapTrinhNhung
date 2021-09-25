#define led 13
#define btn 2
void setup() {
  pinMode(btn,INPUT_PULLUP);
  pinMode(led,OUTPUT);

}

void loop() {
  if(digitalRead(btn)==0)
  {
    digitalWrite(led,1);
  }
  else
  {
    digitalWrite(led,0);
  }
}
