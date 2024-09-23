#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string palavras[2];

    palavras[0] = "OI!";
    palavras[1] = "TCHAU!";

    printf("%c%c%c\n", palavras[0][0], palavras[0][1], palavras[0][2]);
    printf("%s\n", palavras[1]);
}
