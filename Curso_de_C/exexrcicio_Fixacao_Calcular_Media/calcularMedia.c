#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    //Variavéis
    float num1, num2, resultado;

    printf("***CALCULADORA DE MEDIA***\n\n");

    //Solicitando números para o usuário
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    //Realizando o calculo e mostrando para o usuário o resultado.
    resultado = (num1 + num2) / 2;
    printf("A media entre %.1f e %.1f e: %.1f\n\n", num1,num2,resultado);

    printf("\n*** OBRIGADO ***\n\n");

    system("pause");



    return 0;
}
