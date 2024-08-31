#include <stdio.h>

void miar(void);

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        miar();
    }
}

void miar(void)
{
    printf("Miau\n");
}
