/**** LIGAR LEDS PELO SERIAL MONITOR
 **** NOME: MARCIA DE SA            */


int ledPinRed  =  15;
int ledPinGreen =  13;
int ledPinW =  12;
char x;
 
void setup()   {
  Serial.begin(9600);
  pinMode(ledPinRed, OUTPUT);
  pinMode(ledPinGreen, OUTPUT);
  pinMode(ledPinW, OUTPUT);
  Serial.println(' ');  
  Serial.println("---------------------------------");
  Serial.println("PARA LIGAR OS LED'S DIGITE: ");
  Serial.println(" (v) PARA LED VERMELHO");
  Serial.println(" (g) PARA LED VERDE");
  Serial.println(" (w) PARA LED BRANCO");
  Serial.println(' ');
  Serial.println("---------------------------------");
  Serial.println("PARA DESLIGAR OS LED'S DIGITE: d ");
  Serial.println(' ');  
}
 
void loop()
{

  x = Serial.read();
  
  if (x == 'v'){
    digitalWrite(ledPinRed, HIGH);
    Serial.println("LED VERMELHO ON");
    }
    else
       if(x == 'g'){
        digitalWrite(ledPinGreen, HIGH);
        Serial.println("LED VERDE ON");
        }
        else
        if(x == 'w'){
          digitalWrite(ledPinW, HIGH);
          Serial.println("LED BRANCO ON");
          }
          else
            if(x == 'd')
            {
                digitalWrite(ledPinGreen, LOW);
                digitalWrite(ledPinRed, LOW);
                digitalWrite(ledPinW, LOW);
                Serial.println("LED OFF");
            }
          
  delay(1000);
}
