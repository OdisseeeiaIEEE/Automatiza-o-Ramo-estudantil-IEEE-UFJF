# Automatização-o-Ramo-estudantil-IEEE-UFJF

Este repositório tem como objetivo armazenar a fim de auxiliar no desenvolvimento do projeto da automatização do ramo Estudantil IEEE UFJF. Visando a saude dos colaboradores 
o projeto tem como princinpal ponto forte a comunicação WIFI entre membro e saidas do ramo.
Após uma grande pesquisa, foi estudado sobre a utilização do motor 17hs16-2004s1, onde podemos 
|Step | N1| N2| N3| N4|
|-----|---|---|---|---|
|   1 |  1|  1|  0|  0|
|   2 |  0|  1|  1|  0|
|   3 |  0|  0|  1|  1|
|   4 |  1|  0|  0|  1|


Para a alteração de cada passo, a tabela é alteralda de pelo tempo determinado pelo Step, cada step tem 4 váriaveis que são os polos do motor de passo bifásico, logo a cada estatus obrigatóriamente enviáremos dois pulos positivos no motor e dois neutros, onde temos que tomar muito cuidado para não energizamos a mesma bobina. Para o reconhecimento da mesma foi econtrato primeiramente duas bobinas onde os polos estão em série. a partir dela definimos a sequencia de acionamento nos baseando do Datasheat do 17hs16. Todo o projeto que envolve motores e tenções de saida a Tensão operada é de 12 Volt's.

N1 = PRETO 
N2 = VERDE 
N3 = VERMELHO 
N4 = AZUL

|Ligação das bobinas motor 17HS16:|
|---------------------------|
|A+ Preto | A- Verde|
|B+ vermelho| B- Azul|

Bpbinas motor EM-257|
|--------------|-------------------|
|VERMELHO FLAT Preto   | TERCEIRO FLAT  Verde|
|SEGUNDO FLAT  vermelho| QUARTO FLAT- Azul|

Vale se ressaltar que á orientação è o Flat Vermelhor e a parti dele como o primeiro contar para a Esquerda. 
Vermelhor 1 A+
2 B+
3 A-
4 B-

Para o desenvolvimento no motor EM-257, foram testando 3 tempos de passos e obesrvados os seguintes valores

16 mS 1,57A 10,58V
8  mS  1,40A 10,72V
4 mS   1,16A 10,98V

Para  aligação do projeto esta sendo utilizada a Ponte H para o controle do sentido do giro do motor. O código é utilizado vai se basear nas linguagens HTML e C+ e a comunicação vai ser feita através de comunicação de uma site criado pelos própios programados do IEEE. 

Modelo de ponte H usado no projeto:
L298N

Atraés da seguinte função calculamos o dlay de passo 
200 stcps = 360 graus.
1 rpm = 360/60s
Fazendo uma regra de três para obter quantos passos por segundo
(400/60) * stecs/s = 0,15 ms

20rpm -> 20*(360/60) = 60 stcps/s
tsecps= (1/120) -> 8,333s

Podemos determinar esse deley través da equação
tspecs = 1/N*6 [s]

17HS16
Através de medições realizadas no dia 16 de Novembro de 2023 utilizando 480W, 127V encontramos 3.17A e e 9.08V 28,78W de consumo com o motor Ligado.
foi obeservado o aumento  da temperatura na Ponte H

Já com o Motor EM 257, aplicamos uma tensão de 12V, que ao acionar o motor ela cai para 10,72V e entrega 1,40A. Mostrando uma rotação comtinua inteirssante mas com um comportamento estranho de aumento temperatura. tanto na carcaça do motor quanto no dissipador de temperatura da Ponte H.

