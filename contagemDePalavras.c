#include <stdio.h>
#include <string.h>


int main(){

    char frase[400], palavra[20] = {}; 
    char palavraAux[20] = {}, vetorDePalavras[40][40];
    int quantPalavras = 0,tamanhoFrase, contador1 = 0, contador2=0,cont1,cont2;
    int indexDoVetorPalavras = 0, nao = 0; 
 
    //Pega a frase
    scanf(" %[^\n]", frase);

    //Pega o tamanho da frase
    tamanhoFrase = strlen(frase);

    //Deixa todas as letras em minusculo
    while(contador1 < tamanhoFrase){
        if(frase[contador1] >= 65 && frase[contador1] <= 90) frase[contador1] += 32;
        contador1++;
    }
    contador1 = 0;

    //Percorre toda a frase palavra por palavra
    while(contador1 < tamanhoFrase){
        contador2 = 0;

        //Passando a palavra para a variavel  .
        while(frase[contador1] != ' '){ 
            palavra[contador2] = frase[contador1];
            contador2++;
            contador1++;
        }
        //Contador1 ja esta na proxima palavra
        contador1++;
        palavra[contador2] = '\0';

        // Adiciona 1 toda vez que a palavra aparece
        quantPalavras++; 


        //Procura dentro das proximas palavras se alguma é igual a palavra anterior
        cont1 = contador1;
        while(cont1 < tamanhoFrase){
            cont2 = 0;
            //adiciona a proxima palavra em palavraAux
            while(frase[cont1] != ' ' && cont1 < tamanhoFrase){
                palavraAux[cont2] = frase[cont1];
                cont2++;
                cont1++;
            }
            cont1++;
            palavraAux[cont2] = '\0';

            //Se palavraAux for igual a palavra adiciona mais 1 a quantPalavra
            if(strcmp(palavraAux, palavra) == 0){
                quantPalavras++;
            }
            //Apos a verificacao palavraAux rcebe espaco vazio
            strcpy(palavraAux, "");
        }

        //vetor de palavras recebe palavra
        strcpy(vetorDePalavras[indexDoVetorPalavras], palavra);
        indexDoVetorPalavras++;
        
        /*se o index do vetor for maior que 0, tem que verificar se a palavra ja existe
        no vetor, caso isso aconteca a palavra n é printada novamente*/
        if(indexDoVetorPalavras > 0){
            for(int contador = 0; contador < indexDoVetorPalavras - 1; contador++){

                if(strcmp(vetorDePalavras[contador], palavra) == 0){
                    nao = 1;
                } 
            }
        }
        
        if(nao == 0){
            printf("%s - %d\n", palavra,quantPalavras);
        } 

        quantPalavras = 0;
        nao = 0;
        strcpy(palavra, "");

    }

    return 0;
}