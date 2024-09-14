#include <cs50.h>
#include <cs50.h>

// Constante
const int N = 3;

// Protótipo
float media(int tamanho, int array[])

int main(void)
{
    // Definir notas
    int notas[N];
    for (int i = 0; i < N; i++)
    {
        notas[i] = get_int("Nota: ");
    }

    // Apresentar média
    printf("Média: %f\n", media(N, notas))
}

float media(int tamanho, int array[])
{
    // Calcular média
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
    {
        soma += array[i];
    }
    return soma / (float) tamanho;
}
