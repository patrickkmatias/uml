#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Você concorda? ");

    if (c == 's' || c == 'S')
    {
        printf("Eu concordo!\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Não concordo.\n");
    }
}
