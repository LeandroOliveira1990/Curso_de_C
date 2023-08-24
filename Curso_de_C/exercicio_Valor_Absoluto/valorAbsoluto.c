#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    printf("*** VALOR ABSOLUTO ***\n\n");

    //Variaveis
    float num1, num2, calc, result;

    //Pedindo os números para o usuário
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    //Realizando os calculos da diferença entre os números e colocando em valor absoluto
    calc = num1 - num2;
    result = abs(calc);
    

    //Mostrando para o usuário o resultado do valor absoluto.
    printf("\nO valor normal da subtracao seria %.0f", calc);
    printf("\nO valor absoluto entre a diferenca de %.0f e %.0f eh: %.0f", num1, num2,result);

    printf("\n\n\n*** OBRIGADO ***\n\n\n");
    system("pause");

    return 0;
}
