#include <stdio.h>
#include <stdlib.h>

int *alocaVetor(int tamanho){
    //Criado um ponteiro auxiliar
    int *aux;

    //Alocação dinamica de memoria
    aux = (int*) malloc(tamanho * sizeof(int));

    //Retorna o ponteiro que aponta para a primeira posição de memoria do vetor alocado
    return aux;
}
int main(int argc, char const *argv[])
{
    //
    int *vetor, tamanho;

    //Lendo tamanho do vetor pelo usuário
    printf("Digite um tamanho para o vetor:");
    scanf("%d", &tamanho);

    //Ponteiro recebe o endereço de memoria que foi alocado para o vetor
    vetor = alocaVetor(tamanho);
    /*
    vetor[0] = 0;
    vetor[1] = 10;
    vetor[2] = 20;
    vetor[3] = 30;
    */
   //Pega valores do usuário para o vetor
   for (int i = 0; i < tamanho; i++)
   {
    int auxi;
    printf("Digite o valor para o Vetor[%d] = ", i);
    scanf("%d",&auxi);
    vetor[i] = auxi;
   }
   
    //Imprimi o vetor
    for (int i = 0; i < tamanho; i++)
    {
        printf("Vetor[%d]= %d\n", i,vetor[i]);
    }

    //Limpa memoria alocada.
    free(vetor);
    


    return 0;
}
