#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //Definindo variaveis
    int a = 1, b = 10;

    //contando ate 10
    while (a <= 10)
    {
        //Imprimindo a na tela
        printf("\n%d",a);
        //incremento
        a++;                   //a = a + 1;
    }

    //Contagem regressiva
    while (b >= 1)
    {
        //Imprimindo a na tela
        printf("\n%d",b);
        //decremento
        b--;               //b = b - 1;
    }
    
    return 0;
}
