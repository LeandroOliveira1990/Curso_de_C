#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //Definindo variaveis
    int a = 5 , b = 10 , c = 15;
    char d = 'x';


    //maior
    if (a > 2)
    {
        printf("\n%d eh maior que 2", a);
    }

    //maior ou igual
    if (c >= b)
    {
        printf("\n%d eh maior ou igual a %d", c, b);
    }


    //menor
    if (a < 10)
    {
        printf("\n%d eh menor que 2", a);
        
    }

    //diferente
    if (c != 10)
    {
        printf("\n%d nao eh 10", c);
    }
    
    if (d != 'a')
    {
        printf("\n%c nao eh a", d);
    }
    
    
    
    return 0;
}
