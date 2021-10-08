int a=1, b=2, c=3, d=4,e=5, f=13, g=12;
void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}
void khong()
{
  digitalWrite(a, HIGH); digitalWrite(b, HIGH);
  digitalWrite(c, HIGH); digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  delay(2000);
}
void mot()
{
  digitalWrite(a, LOW); digitalWrite(b, HIGH);
  digitalWrite(c, HIGH); digitalWrite(d, LOW);
  digitalWrite(e, LOW);  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(2000);
}
void hai()
{
  digitalWrite(a, HIGH); digitalWrite(b, HIGH);
  digitalWrite(c, LOW); digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  delay(2000);
}
void ba()
{
  digitalWrite(a, HIGH); digitalWrite(b, HIGH);
  digitalWrite(c, HIGH); digitalWrite(d, HIGH);
  digitalWrite(e, LOW);  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  delay(2000);
}
void bon()
{
  digitalWrite(a, LOW); digitalWrite(b, HIGH);
  digitalWrite(c, HIGH); digitalWrite(d, LOW);
  digitalWrite(e, LOW);  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(2000);
}
void nam()
{
  digitalWrite(a, HIGH); digitalWrite(b, LOW);
  digitalWrite(c, HIGH); digitalWrite(d, HIGH);
  digitalWrite(e, LOW);  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(2000);
}
void sau()
{
  digitalWrite(a, HIGH); digitalWrite(b, LOW);
  digitalWrite(c, HIGH); digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(2000);
}
void bay()
{
  digitalWrite(a, HIGH); digitalWrite(b, HIGH);
  digitalWrite(c, HIGH); digitalWrite(d, LOW);
  digitalWrite(e, LOW);  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(2000);
}
void tam()
{
  digitalWrite(a, HIGH); digitalWrite(b, HIGH);
  digitalWrite(c, HIGH); digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(2000);
}
void chin()
{
  digitalWrite(a, HIGH); digitalWrite(b, HIGH);
  digitalWrite(c, HIGH); digitalWrite(d, HIGH);
  digitalWrite(e, LOW);  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  delay(2000);
}
void loop()
{
  khong();
  mot();
  hai();
  ba();
  bon();
  nam();
  sau();
  bay();
  tam();
  chin();
}
