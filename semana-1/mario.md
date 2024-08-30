# Problema a resolver
Ao fim do Mundo 1-1 de Super Mario Bros., Mario tem que ascender uma pirâmide alinhada à direita de tijolos, como abaixo.

![pyramid](https://github.com/user-attachments/assets/46ecef56-235c-466a-bceb-784c24b24020)

Em um arquivo chamado `mario.c` em uma pasta chamada `mario`, implemente um programa em C que recrie aquela pirâmide, usando serquilhas (#) para os tijolos, como abaixo:

```
       #
      ##
     ###
    ####
   #####
  ######
 #######
########
```
Ele deverá pedir ao usuário um `int` representando a altura da pirâmide a ser criada, assim permitindo o programa a criar pirâmides menores como esta:
```
  #
 ##
###
```
Re-pergunte ao usuário de novo e de novo se necessário, caso a entrada dele não seja maior que 0 ou não seja um `int`.

# Conselhos
Expanda as listas abaixo para ler conselhos!

<details>
       <summary><strong>Escreva um pouco de código que você saiba que irá compilar</strong></summary>
       Mesmo que o programa não faça nada, ele deverá pelo menos ser compilado com <code>make</code>!
       
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{

}
```
</details>

<details>
       <summary><strong>Escreva um pouco de pseudocódigo antes de escrever mais código</strong></summary>

Se não souber como resolver o problema só, quebre-o em problemas menores que você provavelmente poderia resolver primeiro. Por exemplo, esse problema, na verdade, são dois problemas:
       
       1. Pergunte ao usuário a altura da pirâmide
       2. Apresentar uma pirâmide daquela altura
       
Então escreva um pouco de pseudocódigo como comentário para que você se lembre de fazer exatamente aquilo:

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Pergunte ao usuário a altura da pirâmide

    // Apresentar uma pirâmide daquela altura
}
```
</details>

# Como testar
Seu código funciona como requisitado caso a entrada seja:
- `-1` ou outro número negativo?
- `0`?
- `1` ou outro número positivo?
- letras ou palavras?
- sem entrada, quando apenas aperta Enter?
