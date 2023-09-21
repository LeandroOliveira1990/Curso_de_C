#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    //Variaveis
    char palavra [255];

    //INSTRUÇÃO
    printf("Digite uma palavra: ");

    //Limpa Buffer
    setbuf(stdin,0);

    //lê a String
    fgets(palavra, 255,stdin);

    //Limpa as casas não utilizadas
    palavra[strlen(palavra)-1] = '\0';

    //Imprime na tela
    printf("%s", palavra);
    return 0;
}
