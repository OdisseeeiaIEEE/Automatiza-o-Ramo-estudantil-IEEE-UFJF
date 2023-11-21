# Automatização-o-Ramo-estudantil-IEEE-UFJF

  Este repositório tem como objetivo armazenar a fim de auxiliar no desenvolvimento do projeto da automatização do ramo Estudantil IEEE UFJF.
Visando a saúde dos colaboradores o projeto tem como principal ponto forte a comunicação WIFI entre membro e saidas do ramo.
Após uma grande pesquisa, foi estudado sobre a utilização do motor 17hs16-2004s1, abaixo podemos ver a sequência de ligamento.

|Step | N1| N2| N3| N4|
|-----|---|---|---|---|
|   1 |  1|  0|  1|  0|
|   2 |  0|  1|  1|  0|
|   3 |  0|  1|  0|  1|
|   4 |  1|  0|  0|  1|


  Para a alteração de cada passo, a tabela é alterada pelo tempo determinado pelo Step, cada step tem 4 váriaveis que são os polos do motor de passo bifásico, logo a cada status obrigatóriamente enviáremos dois polos positivos no motor e dois neutros, onde devemos tomar cuidado para não energizarmos a mesma bobina. Para o reconhecimento da mesma foi encontrado primeiramente duas bobinas onde os polos estão em série, a partir dela definimos a sequência de acionamento nos baseando do Datasheat do 17hs16. Todo o projeto que envolve motores e tensôes de saída,a tensão operada é de 12 Volt's.
  
|Saida Ponte H |Cores referência |
|-------------|------------|
|N1 | PRETO |
|N2 | VERDE |
|N3 | VERMELHO| 
|N4 | AZUL|

|Ligação das bobinas do motor 17HS16:|
|---------------------------|
|A+ Preto | A- Verde|
|B+ vermelho| B- Azul|

|Bobinas motor EM-257| Cores na Ponte H|
|---------------------------------|----------|
|VERMELHO FLAT| Preto   | 
|SEGUNDO FLAT | Vermelho| 
|TERCEIRO FLAT | Verde|
|QUARTO FLAT| Azul|

Vale ressaltar que á orientação é o Flat Vermelho. E a partir dele,o primeiro fio da bobina ser orientado para a Esquerda. 
Vermelho:
1 A+
2 B+
3 A-
4 B-

  Para  a ligação do projeto está sendo utilizada a Ponte H para o controle do sentido do giro do motor. O código utilizado basea-se nas linguagens HTML e C+ e a comunicação vai ser feita através de comunicação de uma site criado pelos próprios programadores do IEEE. 

Modelo de ponte H usado no projeto:
L298N

Através da seguinte função calculamos o delay de passo:

200 stcps = 360 graus.
1 rpm = 360/60s

Fazendo uma regra de três para obter quantos passos por segundo:
(400/60) * stecs/s = 0,15 ms

 -> 20*(360/60) = 60 stcps/s (refazer)
tsecps= (1/120) -> 8,333s

Podemos determinar esse delay através da equação:
tspecs = 1/N*6 [s]

17HS16

Através de medições realizadas no dia 16 de Novembro de 2023 utilizando 480W, 127V encontramos 3.17A e e 9.08V 28,78W de consumo com o motor ligado.
foi observado o aumento  da temperatura na Ponte H

Já com o Motor EM-257, aplicamos uma tensão de 12V, que ao acionar o motor ela cai para 10,72V e entrega 1,40A. 
Mostrando uma rotação continua interresante mas com um comportamento anormal de aumento temperatura, tanto na carcaça do motor quanto no dissipador de temperatura da Ponte H.
Para tentar reduzir a temperatura foi utilizado o método de desenvolvimento do motor; listado abaixo:

Para o desenvolvimento no motor EM-257, foram testados 3 tempos de passos e observados os seguintes valores
|Tempo em Mile Segundos| Corrente (A)| Tensão(V)|
|------------|---------|----------|
|16 mS | 1,57A |10,58V|
|8  mS | 1,40A |10,72V|
|4 mS  | 1,16A |10,98V|

Onde foi notado que no desenvolvimento de passo 4mS foi obtido os melhores resultantes. 

Para o Cochecimento de controle de acesso da porta, esta sendo discutindo a possibilidade de cadastro de IP armazenado em vetores do 

para o Desenvolvimento do Código vamos definir as varáveis 

|Tipo|Váriaveis|Status de inicio|Alocação|
|----|---------|----------------|--------|
|BOOL|FinDeLinha|0|Global|
|



