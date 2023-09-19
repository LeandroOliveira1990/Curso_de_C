#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    //Responsavel por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));


    //Variavel recebe o resto da divisao do numero por 3 (aleatorio entre 0 e 2)
    int aleatorio = rand() % 3;

    //Variavel recebe o resto da divisao do numero por 5 (aleatorio entre 1 e 5)
    int aleatorio2 = (rand() % 5) + 1;
     

    //Imprime o valor
    printf("%d\n",aleatorio );
    printf("%d\n",aleatorio2 );

    return 0;
}
