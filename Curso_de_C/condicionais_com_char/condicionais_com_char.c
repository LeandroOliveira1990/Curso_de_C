#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //Definindo variaveis
    char letra = 'x';

    //Condicional Simples
    if (letra == 'x')
    {
        printf("\nA letra eh x");
    }

    printf("\nCodigo da letra - %d", letra);

    //Letra x tabela ASCII = 120
    if(letra == 120){
        printf("\nA letra eh x");
    }
    
    return 0;
}
