# Problema a resolver
Ao fim do Mundo 1-1 de Super Mario Bros., Mario tem que ascender uma pirâmide alinhada à direita de tijolos, como abaixo.

(imagem)

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

# Como testar
Seu código funciona como requisitado caso a entrada seja:
- `-1` ou outro número negativo?
- `0`?
- `1` ou outro número positivo?
- letras ou palavras?
- sem entrada, quando apenas aperta Enter?