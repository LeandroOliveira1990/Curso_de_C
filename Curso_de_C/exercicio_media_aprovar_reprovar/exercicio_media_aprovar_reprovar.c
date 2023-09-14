#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float nota1, nota2, nota3, media;
    printf("***APROVADO OU REPROVADO***");
    printf("\nDigite a nota 1: ");
    scanf("%f",&nota1);
    printf("\nDigite a nota 2: ");
    scanf("%f",&nota2);
    printf("\nDigite a nota 3: ");
    scanf("%f",&nota3);

    media = (nota1 + nota2 + nota3) / 3;
    printf("\nA media foi de: %.1f", media);

    if (media > 7.0)
    {
        
        printf("\nPARABENS *** APROVADO ***");
    } else{
        printf("\n*** REPROVADO ****");
    }
    


    return 0;
}
