#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //Definindo Variaveis
    int i = 10;

    //usando While
    printf("While");
    while (i >=10 && i <= 20 )
    {
        //Condicional para Imprimir somente os números pares.
        if (i % 2 == 0)
        {
            printf("\n%d", i);
        }
        i++;
    }
    
    //Usando o Do While
    i=10;
    printf("\n\nDo Whie");
    do
    {
        //Condicional para Imprimir somente os números pares.
       if (i % 2 == 0)
        {
            printf("\n%d", i);
        }
        i++;
    } while (i >= 10 && i<=20);

    //Usando o For
    printf("\n\nUsando o for");
    for (i =10; i>=10 && i<=20;i++)
    {
        //Condicional para Imprimir somente os números pares.
         if (i % 2 == 0)
        {
            printf("\n%d", i);
        }
        i++;
    }
    
    
    return 0;
}
