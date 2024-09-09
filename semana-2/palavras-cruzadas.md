# Palavras Cruzadas
![Imagem: Palavras Cruzadas](https://github.com/user-attachments/assets/417e5148-543a-4719-b065-472a71f11f47)

# Problema a resolver
No jogo *Palavras Cruzadas*, os jogadores criam palavras que se cruzam para ganhar pontos e o número de pontos é a soma dos valores das letras na palavra.

|A|B|C|D|E|F|G|H|I|J|K|L|M|N|O|P|Q |R|S|T|U|V|W|X|Y|Z |
|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|--|-|-|-|-|-|-|-|-|--|
|1|3|3|2|1|4|2|4|1|8|5|1|3|1|1|3|10|1|1|1|1|4|4|8|4|10|

Por exemplo, se quisermos marcar a palavra "CODE", notaremos que 'C' vale 3 pontos, 'O' vale 1 ponto, 'D' vale 2 pontos e 'E' vale 1 ponto. Somando-os, sabemos que "CODE" vale 7 pontos.

Em um arquivo chamado `palavras-cruzadas.c` em uma pasta chamada `palavras-cruzadas`, implemente um programa em C que determine o vencedor de um curto jogo de Palavras Cruzadas. O programa deve solicitar duas entradas: uma vez para "Jogador 1" inserir a palavra e uma vez para "Jogador 2" inserir a palavra. Então, dependendo de qual jogador marcar mais pontos, o programa deve apresentar "Jogador 1 venceu!", "Jogador 2 venceu!" ou "Empate!" (no caso de os dois jogadores marcarem a mesma quantidade de pontos).

# Demonstração
<script data-autoplay="1" data-cols="80" data-loop="1" data-rows="12" id="asciicast-74B4kq3ftleKe6AdN0NxFV8CN" src="https://asciinema.org/a/74B4kq3ftleKe6AdN0NxFV8CN.js"></script>

# Conselhos
<details>
       <summary><strong>Escreva um pouco de código que você saiba que irá compilar</strong></summary>
       Mesmo que o programa não faça nada, ele deverá pelo menos ser compilado com <code>make</code>!
       
```c
#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

}
```

Note que desta vez está incluindo algumas bibliotecas que irão lhe dar acesso à funções que poderão te ajudar a resolver o problema.
</details>

<details>
       <summary><strong>Escreva um pouco de pseudocódigo antes de escrever mais código</strong></summary>

Se não souber como resolver o problema só, quebre-o em problemas menores que você provavelmente poderia resolver primeiro. Por exemplo, esse problema, na verdade, é um punhado de problemas menores:
       
       1. Pergunte duas palavras ao usuário
       2. Compute a pontuação de cada palavra
       2. Apresente o vencedor no Terminal
       
Então escreva um pouco de pseudocódigo como comentário para que você se lembre de fazer exatamente aquilo:

```c
#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Pergunte duas palavras ao usuário

    // Compute a pontuação de cada palavra

    // Apresente o vencedor no Terminal
}
```
</details>
