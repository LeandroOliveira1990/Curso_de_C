#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    //definindo uma variavel
    int a = 5, b;

    //imprimindo a variável a
    printf("%d\n",a);

    //Concatenando
    printf("O valor da var a e: %d\n", a);

    //Mudando o valor de a
    a = 15;
    printf("O valor da var a e: %d\n", a);

    //Lendo valores
    printf("Digite um valor para b: ");
    scanf("%d", &b);
    printf("O valor da var b e: %d\n", b);


    //pausando
    system("pause");
    return 0;
}
