#include <cs50.h>
#include <stdio.h>

int adicionar(int a, int b);

int main(void)
{
    // Perguntar ao usuário por x
    int x = get_int("x: ");

    // Perguntar ao usuário por y
    int y = get_int("y: ");

    // Fazer adição
    printf("%i\n", adicionar(x, y));
}

int adicionar(int a, int b)
{
    return a + b;
}
