#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //Definindo variaveis
    int n1, n2, n3;

    printf("***VERIFICADOR DE TRIANGULOS***\n\n\n");

    printf("Digite o primeiro lado:");
    scanf("%d", &n1);

    printf("Digite o segundo lado:");
    scanf("%d", &n2);

    printf("Digite o terceiro lado:");
    scanf("%d", &n3);

    printf("\n\n***RESULTADO***\n\n");

    if(n1 == n2 && n1 == n3 && n2 == n3)
    {
        printf("Este triangulo eh EQUILATERO");

    }else if (n1 == n2 || n1 == n3 || n2 == n3)
    {
        printf("Este triangulo eh ISOSCELES");

    }

    else if (n1 != n2 && n1 != n3 && n2 != n3)
    {
        printf("Este triangulo eh ESCALENO");

    }
    
    
    
    

    return 0;
}
