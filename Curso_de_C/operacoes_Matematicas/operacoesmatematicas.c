#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    //definindo variaveis
    int a = 6, b = 3;

    //Soma
    printf("A soma de %d e %d = %d\n",a, b, a + b);

    //Subtração
    printf("A subtracao de %d e %d = %d\n",a, b, a + b);

    //Divisão
    printf("A divisao de %d e %d = %d\n",a, b, a / b);

    //Multiplicação
    printf("A multiplicacao de %d e %d = %d\n",a, b, a * b);

    //Resto da Divisão
    printf("O resto da divisao de %d e %d = %d\n",a, b, a % b);

    //Valor Absoluto
    printf("O valor absoluto de -3 = %d \n",abs(-3));



    system("pause");




    return 0;
}
