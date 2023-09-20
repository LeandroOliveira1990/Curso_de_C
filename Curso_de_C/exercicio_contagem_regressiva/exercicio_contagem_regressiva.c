#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{

    //Definindo variaveis
    int i = 10;
    //usando o while
        printf("While\n");

    while (i >= 1)
    {
        printf("\n%d",i);
        i--;
        
    }

    i=10;
    //usando Do While
    printf("\nDo While\n\n");
    do
    {
        printf("\n%d",i);
        i--;
        
    } while (i >= 1);

    //usando For
    printf("\n\nUsando o FOR\n");
    for ( i = 10; i >= 1; i--)
    {
        printf("\n%d",i);
    }
    
    
    
    return 0;
}
