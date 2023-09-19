#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //Definindo variaveis
    float n1,n2,resultado;
    int escolha;

    printf("***SWICTH CASE CALCULATOR***\n\n\n");

    //obter dados do usuario
    printf("Qual operacao matematica pretende fazer\n");
    printf("1- Somar , 2- Subtrair, 3- Dividir, 4- Multiplicar\n");
    printf("Digite o numero da operacao desejada: ");
    scanf("%d",&escolha);
    printf("Digite o primeiro numero: ");
    scanf("%f",&n1);
    printf("Digite o segundo numero: ");
    scanf("%f",&n2);

    //inicio do Swicth case
    switch (escolha)
    {
    case 1:
        resultado = n1 + n2;
        printf("A soma de %.1f e %.1f: %.1f",n1,n2,resultado );
        break;

    case 2:
        resultado = n1 - n2;
        printf("A Subtracao de %.1f e %.1f: %.1f",n1,n2,resultado );
        break;
    
    case 3:
        resultado = n1 / n2;
        printf("A divisao de %.1f e %.1f: %.1f",n1,n2,resultado );
        break;

    case 4:
        resultado = n1 * n2;
        printf("A multiplicacao de %.1f e %.1f: %.1f",n1,n2,resultado );
        break;
    
    default:
        printf("Opcao INVALIDA");
        break;
    }




    return 0;
}
