#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
   int num1, num2, num3, mult;

    printf("***MULTIPLICACAO***\n");

    printf("Digite tres numeros: ");

    scanf("%d %d %d", &num1, &num2, &num3);
    mult = num1 * num2 * num3;

    printf("\nA multiplicacao entre %d * %d * %d eh: %d", num1, num2, num3, mult);


    return 0;
}
