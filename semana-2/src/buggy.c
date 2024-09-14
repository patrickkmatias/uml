#include <cs50.h>
#include <stdio.h>

void escrever_coluna(int altura);

int main(void)
{
    int altura = get_int("Altura: ");
    escrever_coluna(altura);
}

void escrever_coluna(int altura)
{
    for (int i = 0; i < altura; i++)
    {
        printf("#\n");
    }
}
