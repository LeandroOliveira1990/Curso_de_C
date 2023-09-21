#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //Definindo variaveis
    int i, valor, testar = 0;

    //Pedindo para o usuario o número
    printf("DIGITE O NUMERO QUE DESEJA VERIFICAR SE EH PRIMO: ");
    scanf("%d", &valor);

    for(i = 1; i <= valor; i++){
        if (valor % i == 0 || valor / i == 0)
        {
            testar++;
           // printf("\n%d", testar);
        }
               
        
    }

    if (testar == 2)
    {
        printf("\n\nO NUMERO %d EH PRIMO", valor);
    } else{
        printf("\n\nO NUMERO %d ***NAO*** EH PRIMO", valor);

    }
    


    return 0;
}
