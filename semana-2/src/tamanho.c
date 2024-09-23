#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void)
{
    // Perguntar pelo nome do usuário
    string nome = get_string("Nome: ");
    int tamanho = strlen(nome);
    printf("%i\n", tamanho);
}
