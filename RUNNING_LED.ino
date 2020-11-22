boolean t=true;
int i=7;

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);


}

void loop()
{
  digitalWrite(i,HIGH);

    delay(150);
    digitalWrite(i,LOW);
    
    if(t == true)
    {
    i = i - 1;
    }
    else
    {
    i = i + 1;
  }
  if(i < 3)
  {
  i = 2;
  t = false;
  }
  if(i > 7)
  {
  i = 6;
  t = true;
  }
}
