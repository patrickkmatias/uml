#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Perguntar ao usuário por x
    int x = get_int("x: ");

    // Perguntar ao usuário por y
    int y = get_int("y: ");

    double z = (double) x / (double) y;

    printf("%.20f\n", z);
}
