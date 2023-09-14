#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //Definindo variaveis
    int a = 4, opcao = 3;
    float b = 2.5;
    char c = 'x';

    //Condicional simples
    if (a == 5)
    {
        printf("\nA variavel a = 5");
    }

    if (b == 2.5)
    {
        printf("\nA variavel b = 2.5");
    }

    if (c == 'x')
    {
        printf("\nA variavel c = x");
    }

    //Numero par ou Impar
    if (a % 2 == 1)
    {
        printf("\nA variavel a eh impar");
    }else{
        printf("\nA variavel a eh par");
    }

    //Condicional composta
    if(opcao == 1){
        printf("\nA opcao = 1");
    }else if (opcao == 2)
    {
        printf("\nA opcao = 2");
    }else{
        printf("\nA opcao nao eh igual a 1 nem 2");
    }
    

    
    


    return 0;
}
