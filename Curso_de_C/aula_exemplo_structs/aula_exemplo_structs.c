#include <stdio.h>
#include <stdlib.h>

struct palavra{
    int ordem;
    char letra;
    char texto[255];
};



int main(int argc, char const *argv[])
{
    //Criar uma palavra
    struct palavra primeiraPalavra;

    //Modificando os campos
    primeiraPalavra.ordem = 50;
    primeiraPalavra.letra = 'p';
    strcpy(primeiraPalavra.texto, "palavrinha");


    //Mostrando valores do Struct
    printf("Ordem: %d, Primeira Letra: %c, Palavra: %s ", primeiraPalavra.ordem, primeiraPalavra.letra, primeiraPalavra.texto);
    

    //Fazendo uma lista de Structs
    struct palavra listaDePalavras[3];

    //Modificando os campos
    listaDePalavras[0].ordem = 0;
    listaDePalavras[1].ordem = 1;
    listaDePalavras[2].ordem = 2;
    listaDePalavras[0].letra = 'd';
    listaDePalavras[1].letra = 'l';
    listaDePalavras[2].letra = 'b';
    strcpy(listaDePalavras[0].texto, "legal");
    strcpy(listaDePalavras[1].texto, "show");
    strcpy(listaDePalavras[2].texto, "bacana");


    //Percorrendo Vetor
    for (int i = 0; i < 3; i++)
    {
        printf("\nOrdem: %d, Primeira Letra: %c, Palavra: %s ", listaDePalavras[i].ordem, listaDePalavras[i].letra, listaDePalavras[i].texto);

    }
    







  
    
    return 0;
}


