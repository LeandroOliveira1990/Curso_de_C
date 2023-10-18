#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //definindo variaveis
    int linhas = 3, colunas = 3;
    int **matriz;
    //alocando as linhas
    matriz = (int **)malloc(linhas * sizeof(int *));

    //alocando memoria para as colunas de cada linha
    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = (int *) malloc(colunas * sizeof(int));
    }
    
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] = i;
            printf("%d\n", matriz[i][j]);
        }
        printf("\n");
        
    }
    



    return 0;
}
