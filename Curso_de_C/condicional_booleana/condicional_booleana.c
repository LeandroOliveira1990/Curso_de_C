#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{

    //Definindo váriaveis
    bool a = true , b = false;

    //Se A for verdadeiro
    if (a)
    {
        printf("A eh verdadeiro");
    }
    
    // Comparando o B
    if (b)
    {
        printf("\nB eh verddeiro");
    } else{
        printf("\nB eh falso");

    }


    //Comparando uma falsidade
    if(!b){
        printf("\nB eh falso");
    }
    
    
    return 0;
}
