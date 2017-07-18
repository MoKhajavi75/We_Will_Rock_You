// We Will Rock You!, Arduino by MohamadKh75
// 2017-07-18
// ********************


const int LED_kick = 2;   //connected to digital pin 2, used for kick!
const int LED_clap_1 = 3;   //connected to digital pin 3, used for clap!
const int LED_clap_2 = 4;   //connected to digital pin 4, used for clap!
const int LED_clap_3 = 5;   //connected to digital pin 5, used for clap!
const int LED_clap_4 = 6;   //connected to digital pin 6, used for clap!
const int LED_clap_5 = 7;   //connected to digital pin 7, used for clap!

void setup()
{
  pinMode(LED_kick, OUTPUT);
  pinMode(LED_clap_1, OUTPUT);
  pinMode(LED_clap_2, OUTPUT);
  pinMode(LED_clap_3, OUTPUT);
  pinMode(LED_clap_4, OUTPUT);
  pinMode(LED_clap_5, OUTPUT);
}

void loop()
{
  digitalWrite(LED_kick, HIGH);   //first kick!
  delay(230);

  digitalWrite(LED_kick, LOW);
  delay(145);
  
  digitalWrite(LED_kick, HIGH);   //second kick!
  delay(230);
  
  digitalWrite(LED_kick, LOW);
  delay(200);

  digitalWrite(LED_clap_1, HIGH);   //clap :))
  digitalWrite(LED_clap_2, HIGH);   //clap :))
  digitalWrite(LED_clap_3, HIGH);   //clap :))
  digitalWrite(LED_clap_4, HIGH);   //clap :))
  digitalWrite(LED_clap_5, HIGH);   //clap :))
  delay(510);

  digitalWrite(LED_clap_1, LOW);
  digitalWrite(LED_clap_2, LOW);
  digitalWrite(LED_clap_3, LOW);
  digitalWrite(LED_clap_4, LOW);
  digitalWrite(LED_clap_5, LOW);
  delay(160);
}
