#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //Definindo variaveis
    int cont;

    //Contanto até 10
    for (cont = 1; cont <= 10; cont++)
    {
        printf("\n%d", cont);
    }

    //Tabuada do 5
    for (cont = 1; cont <= 10; cont++)
    {
        printf("\n 5 x %d = %d",cont, 5 * cont );
    }

    //Contando de 2 em 2
    for (cont = 0; cont <= 10; cont = cont + 2)
    {
        printf("\n%d", cont);
    }
    
      //contagem regressiva
    for (cont = 10; cont >= 1; cont--)
    {
        printf("\n%d", cont);
    }
    


    return 0;
}
