#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL,"");

    //imprime Olá
    printf("Olá \n");

    //lendo valor inteiro
    int a = 5;
    int b =6;
    printf("%d \n",a);
    printf("%d \n", a + b);
    printf("O valor de a é : %d \n", a);
    printf("Digite um valor para a: ");
    scanf("%d",&a);
    printf("o valor digitado de a é: %d ", a);

    //lendo valor quebrado(com vírgula)
    float c = 5.5;
    printf("\nO valor de float c é: %f ", c);
    printf("\nDigite um valor em float para c: ");
    scanf("%f", &c);
    printf("O valor em float digitado c é: %f", c);

    //Lendo letra(char)
    char d = 'a';
    printf("\nO valor de char d é: %c ", d);
    printf("\nDigite um valor em char para d: ");
    fflush(stdin);//ao chamar scanf para char tem que usar este comando para limpar buffer
    scanf("%c", &d);
    printf("O valor em char digitado é: %c", d);


    return 0;
}


