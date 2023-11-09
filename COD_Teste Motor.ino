//Programa: Ponte H L298N com motor de passo 17HS16-2004s1
//Ramos Estudantil IEEE.

//Conexoes modulo - Arduino
int PRETO = 8;
int VERDE = 9;
int VERMELHO = 10;
int AZUL = 11;

void setup()
{
  //Define os pinos como saida
  pinMode(PRETO,OUTPUT);
  pinMode(VERDE,OUTPUT);
  pinMode(VERMELHO,OUTPUT);
  pinMode(AZUL,OUTPUT);
}

int tempo = 8;

void loop()
{
  //Passo 1
  digitalWrite(PRETO, 1);
  digitalWrite(VERDE, 0);
  digitalWrite(VERMELHO, 1);
  digitalWrite(AZUL, 0);
  delay(tempo);  

  //Passo 2
  digitalWrite(PRETO, 0);
  digitalWrite(VERDE, 1);
  digitalWrite(VERMELHO, 1);
  digitalWrite(AZUL, 0);
  delay(tempo);

  //Passo 3
  digitalWrite(PRETO, 0);
  digitalWrite(VERDE, 1);
  digitalWrite(VERMELHO, 0);
  digitalWrite(AZUL, 1);
  delay(tempo);

  //Passo 4
  digitalWrite(PRETO, 1);
  digitalWrite(VERDE, 0);
  digitalWrite(VERMELHO, 0);
  digitalWrite(AZUL, 1);
  delay(tempo);
}
