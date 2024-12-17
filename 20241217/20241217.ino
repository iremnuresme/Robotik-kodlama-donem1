
void setup()
{
  pinMode (3,INPUT);
  pinMode (4,INPUT);
  pinMode (9,OUTPUT);
  pinMode (10,OUTPUT);
}

void loop()
{
  int btn3 = digitalRead (3);
  int btn4 = digitalRead(4);
  
  if (btn3 ==1) {
    digitalWrite (9,1);
    delay (5000);
  }
  if (btn4==1) {
    digitalWrite (10,1);
    delay (5000);
  }
  digitalWrite (9,0);
  digitalWrite (10,0);
  
}
