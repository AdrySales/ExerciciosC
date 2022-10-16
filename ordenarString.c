#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char frase[10000], aux[10000];
    int contador = 0, qtdDePalavras = 0, contadorAux= 0, tamanhoFrase;
    
    //pega a frase e o tamanho da frase
    scanf(" %[^\n]", frase);
    tamanhoFrase= strlen(frase);

    //deixa todas as letras em minusculo
    for(int contador = 0; contador < tamanhoFrase; contador++){
        if(frase[contador] >= 65 && frase[contador] < 90)  frase[contador] += 32;
    }
    
    /*pega a quantidade de espacos vazios entre as palavras dessa forma
    a quantidade de espacos mais uma unidade sera a quantidade de palavras*/
    while(contador < tamanhoFrase){
        if(frase[contador] == ' ') qtdDePalavras++;
        contador++;
    }
    contador = 0;
    qtdDePalavras++;


    //declaracao do vetor de palavras com a quantidade de palavras
    char vetorPalavras[qtdDePalavras][150];
    

    /*separa as palavras da frase em uma matriz onde cada letra ocupa
    um coluna de cada linha*/
    while(contador < qtdDePalavras){
       int indiceDasLetras = 0;
        while(frase[contadorAux] != ' ' && frase[contadorAux] !='\0'){
            vetorPalavras[contador][indiceDasLetras] = frase[contadorAux];
            contadorAux++;
            indiceDasLetras++;    
        }
        contadorAux++;
        vetorPalavras[contador][indiceDasLetras] = '\0';
        contador++;
    }
    
    //Ordenacao das palavras em ordem alfabetica
    for(int contador1 = 1; contador1 < qtdDePalavras; contador1++){ 
        for(int contador2 = 1; contador2 < qtdDePalavras; contador2++){
             //se a primeira string ocorrer primeiro que a segunda o resultado e 1
            if(strcmp(vetorPalavras[contador2 - 1], vetorPalavras[contador2]) > 0){
                //ordenacao 
                strcpy(aux, vetorPalavras[contador2 - 1]);
                strcpy(vetorPalavras[contador2 - 1], vetorPalavras[contador2]);  
                strcpy(vetorPalavras[contador2], aux);
            }
        }
    }

    //verifica quantas duplas de palavras sao iguais
    int  quant;
    for(int cont = 1; cont < qtdDePalavras; cont++) {
        if(strcmp(vetorPalavras[cont-1], vetorPalavras[cont]) == 0) quant++;
    }

    //elimina a palavra repetida 
    for(int cont1 = 1; cont1 < qtdDePalavras; cont1++){ 
        for(int cont2 = 1; cont2 < qtdDePalavras; cont2++){

            if(strcmp(vetorPalavras[cont2-1], vetorPalavras[cont2]) == 0){
                strcpy(vetorPalavras[cont2], vetorPalavras[cont2+1]);
            
            }
        }
    }

    //print
    for(int cont = 0; cont < qtdDePalavras - quant; cont++){

        printf("%s", vetorPalavras[cont]);
        if(cont != qtdDePalavras){
            printf(" ");
        } 

    }
    
    return 0;
}