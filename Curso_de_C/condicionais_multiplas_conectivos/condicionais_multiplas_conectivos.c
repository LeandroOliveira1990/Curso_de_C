#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //Definindo Variaveis
    int a = 10;

    //Conectivo Lógico e (AND), se uma for falsa não entra no bloco
    if(a > 5 && a < 15){
        printf("\n A variavel 'a' esta entre 5 e 15");
    }

    //Conectivo Lógico OU (OR), a partir de uma comparação verdeira entra no bloco
    if (a > 5 || a > 15)
    {
         printf("\n A variavel 'a' eh maior que 5 ou  15");

    }

    //Misturando conectivos
    if ((a > 5 && a < 15) || a == 20)
    {
        printf("\n A variavel 'a' esta entre 5 e 15 ou ela vale 20");
    }
    
    
    return 0;
}
