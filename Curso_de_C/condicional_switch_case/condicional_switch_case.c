#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //Definindo variaveis
    int a = 2;
    char b = 'y';

    //Switch case
    switch (a)
    {
    case 1:
        printf("\nOpcao escolhida: 1");
        break;
    case 2:
        printf("\nOpcao escolhida: 2");

        break;
    
    default:
        printf("\nOpcao INVALIDA");

        break;
    }

    //Switch com Char
    switch (b)
    {
    case 'x':
        printf("\nA letra eh 'x'");
        
        break;
    
    default:
        printf("\nOpcao INVALIDA");
        break;
    }


    return 0;
}
