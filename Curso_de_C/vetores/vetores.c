#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int vetor[3];

    //Passando valores para o vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    //Exibir valor dos vetores em laço de repetição For
    for (int i = 0; i < 3; i++)
    {
        printf("\nPosicao %d: %d",i,vetor[i]);
    }
    

    //Adicionando 1 para cada posição
    for (int i = 0; i < 3; i++)
    {
        vetor[i] = vetor[i] + 1;
    }

    //Exibir na tela com valor adicionado
    for (int i = 0; i < 3; i++)
    {
        printf("\nPosicao %d: %d",i,vetor[i]);
    }
    //Digitando valores para o vetor
     for (int i = 0; i < 3; i++)
    {
        printf("\nDigite o valor para o vetor[%d]:",i);
        scanf("%d", &vetor[i]);
    }
    //Exibir na tela com valor digitado
    for (int i = 0; i < 3; i++)
    {
        printf("\nPosicao %d: %d",i,vetor[i]);
    }

    return 0;
}
