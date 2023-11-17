
// Portas onde o acionador do motor esta conectado, onde vale se ressaltar que ele esta funcionado através de Pull Up
byte ledPin = 14;
byte laserPin = 13;


byte laserPin2 = 12;

// Variavel de armazenamento de dados de leitura.
byte x;

//Sequencial de portas onde o motor esta conectado 
int PRETO = 8;
int VERDE = 9;
int VERMELHO = 10;
int AZUL = 11;
int tempo = 16;

void setup() {
  
  pinMode (ledPin, OUTPUT);
  pinMode(PRETO,OUTPUT);
  pinMode(VERDE,OUTPUT);
  pinMode(VERMELHO,OUTPUT);
  pinMode(AZUL,OUTPUT);

 for (x = 0; x < 3; x = x + 1) {
    digitalWrite (ledPin, HIGH);
    delay(1000);
    digitalWrite (ledPin, LOW);
    delay(1000);
  }
  
  pinMode (laserPin, INPUT_PULLUP);
  pinMode (laserPin2, INPUT_PULLUP);
}

void loop() {


  // sentido de rotação Horário
  while(digitalRead (laserPin) == LOW) {
 //Passo 1
  digitalWrite(PRETO, 1);
  digitalWrite(VERDE, 0);
  digitalWrite(VERMELHO, 1);
  digitalWrite(AZUL, 0);
  digitalWrite (ledPin, HIGH);
  delay(tempo);  

  //Passo 2
  digitalWrite(PRETO, 0);
  digitalWrite(VERDE, 1);
  digitalWrite(VERMELHO, 1);
  digitalWrite(AZUL,0);
  digitalWrite (ledPin, HIGH);
  delay(tempo);

  //Passo 3
  digitalWrite(PRETO, 0);
  digitalWrite(VERDE, 1);
  digitalWrite(VERMELHO, 0);
  digitalWrite(AZUL, 1);
  digitalWrite (ledPin, HIGH);
  delay(tempo);

  //Passo 4
  digitalWrite(PRETO, 1);
  digitalWrite(VERDE,0 );
  digitalWrite(VERMELHO, 0);
  digitalWrite(AZUL, 1);
  digitalWrite (ledPin, HIGH);
  delay(tempo);
  }
//sentido de rotação Anti horário.
  while(digitalRead (laserPin2) == LOW) {

  //Passo 4
  digitalWrite(PRETO, 1);
  digitalWrite(VERDE,0 );
  digitalWrite(VERMELHO, 0);
  digitalWrite(AZUL, 1);
  digitalWrite (ledPin, HIGH);
  delay(tempo);
  
  //Passo 3
  digitalWrite(PRETO, 0);
  digitalWrite(VERDE, 1);
  digitalWrite(VERMELHO, 0);
  digitalWrite(AZUL, 1);
  digitalWrite (ledPin, HIGH);
  delay(tempo);

   //Passo 2
  digitalWrite(PRETO, 0);
  digitalWrite(VERDE, 1);
  digitalWrite(VERMELHO, 1);
  digitalWrite(AZUL,0);
  digitalWrite (ledPin, HIGH);
  delay(tempo);

   //Passo 1
  digitalWrite(PRETO, 1);
  digitalWrite(VERDE, 0);
  digitalWrite(VERMELHO, 1);
  digitalWrite(AZUL, 0);
  digitalWrite (ledPin, HIGH);
  delay(tempo);  


  
  }
//Motor desligado
  digitalWrite(PRETO, 0);
  digitalWrite(VERDE,0 );
  digitalWrite(VERMELHO, 0);
  digitalWrite(AZUL, 0);


}
