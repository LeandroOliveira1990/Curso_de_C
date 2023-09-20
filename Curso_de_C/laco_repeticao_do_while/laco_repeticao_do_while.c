#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //Definindo variaveis
    int a = 1, b = 10;

    //Contanto ate 10
    // usando o do ele roda o código ao menos uma vez e depois verifica a condicional
    do
    {
        //imprimindo 'a' na tela
        printf("\n%d",a);

        //Incremento
        a++;
    } while (a <= 10);


    //Contagem regressiva
    do
    {
     //imprimindo 'a' na tela
        printf("\n%d",b);

        //Decremento
        b--;   
    } while (b >= 1);
    
    
    return 0;
}
