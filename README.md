# Automatiza-o-Ramo-estudantil-IEEE-UFJF
Este repositório tem como objetivo armazenar a fim de auxiliar no desenvolvimento do projeto da automatização do ramo Estudantil IEEE UFJF. Visando a saude dos colaboradores 
o projeto tem como princinpal ponto forte a comunicação WIFI entre membro e saidas do ramo.
Após uma grande pesquisa, foi estudado sobre a utilização do motor 17hs16-2004s1, onde podemos 
 * Step N1 N2 N3 N4
 *    1  1  1  0  0
 *    2  0  1  0  1
 *    3  0  1  1  1
 *    4  1  0  1  0


N1 = PRETO
N2 = VERDE
N3 = VERMELHO
N4 = AZUL

Ligação das bobinas:
A+/A-
B+/B-

Modelo de ponte H usado no projeto:
L298N

Atraés da seguinte função calculamos o dlay de passo 
400 stcps = 360 graus.
1 rpm = 360/60s
Fazendo uma regra de três para obter quantos passos por segundo
(400/60) * stecs/s = 0,15 ms

20rpm -> 20*(360/60) = 120 stcps/s
tsecps= (1/120) -> 8,333s

Podemos determinar esse deley través da equação
tspecs = 1/N*6 [s]

