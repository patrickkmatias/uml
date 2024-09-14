#include <cs50.h>
#include <stdio.h>

const int N = 3;

int main(void)
{
    int notas[N];
    for (int i = 0; i < N; i++)
    {
        notas[i] = get_int("Nota: ");
    }

    printf("Média: %f\n", (notas[0] + notas[1] + notas[2]) / 3.0);
}
