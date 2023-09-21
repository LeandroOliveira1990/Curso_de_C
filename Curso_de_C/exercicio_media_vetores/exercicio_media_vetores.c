#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //Definindo variaveis
    int tam;
    //Perguntando para  usuário o tamanho do vetor
    printf("Quantos numeros deseja digita para calcular a media: ");
    scanf("%d", &tam);

    //Definindo variaveis
    float vetor[tam], media, soma;

    

    //Pegando numeros com usuario.
    for (int i = 0; i < tam; i++)
    {
        printf("Digite o numero[%d]:", i + 1);
        scanf("%f", &vetor[i]);
        //somando os valores dos vetores para a variavel soma.
        soma = soma + vetor[i];
    }

    //exibe na tela os valores digitados.
    for (int i = 0; i < tam; i++)
    {
        printf("\nvetor[%d]: %.2f", i, vetor[i]);
    }
    
    //calculando a media
    media = soma / tam;

    //Exibir na tela o resultado
    printf("\n\nA media dos valores eh: %.2f",media);
    
    return 0;
}
