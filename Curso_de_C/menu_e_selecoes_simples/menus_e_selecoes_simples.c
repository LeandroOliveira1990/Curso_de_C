#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //Definindo variaveis
    int opcao;


    while (opcao < 1 || opcao > 3)
    {     
       
    //interface de menu
    printf("Escolha uma opcao:");
    printf("\n1-opcao 1");
    printf("\n2-opcao 2");
    printf("\n3-opcao 3\n");

    //lendo a opcao
    scanf("%d", &opcao);
    
    //Resultado de acordo com a opção escolhida
    switch (opcao)
    {
    case 1:
        printf("\nOpcao 1 foi escolhida");
        break;

    case 2:
        printf("\nOpcao 2 foi escolhida");

        break;
    
    case 3:
        printf("\nOpcao 3 foi escolhida");
        
        break;
    
    default:
        printf("\nOpcao INVALIDA\n");

        break;
    }
    }

    return 0;
}
