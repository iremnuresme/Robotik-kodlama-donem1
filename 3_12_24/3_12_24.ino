// C++ code
//
void setup()
{
  for (int sayac=2; sayac<=6; sayac++) {
    pinMode (sayac, OUTPUT);
  }
}

void loop()
{
  for ( int sayac=2; sayac<=6; sayac++) {
    digitalWrite(sayac,1);
    delay(100);
    digitalWrite (sayac,0);
    delay (100); 
  }
}
