#include <stdio.h>
#include <stdlib.h>

int main(){

    int *numeros = NULL;
    int moda = 0, contador= 0, quantDeNum = 0, numero_aux;
    float mediana;
     int  maiorNumeroDerep = 0, PossicaoModa;

    //Recebe os numeros ate o E0F 
    while(scanf("%d", &numero_aux) != EOF){
        numeros = (int *) realloc(numeros, (contador + 1) * sizeof(int));
        numeros[contador] = numero_aux;

        if(numeros == NULL){
            printf("Erro ao realocar");
            free(numeros);
            exit(1);
        }
        contador++;
        quantDeNum++;
    }


    //colocando os numeros em ordem crescente 
    int aux;
    for(int contador1 = 0; contador1 < quantDeNum; contador1++){
        for(int contador2 = contador1 + 1; contador2 < quantDeNum; contador2++){

            if(numeros[contador1] > numeros[contador2]){

                aux = numeros[contador1];
                numeros[contador1] = numeros[contador2];
                numeros[contador2] = aux;
            }
        }
    }

    
    //Calculo da mediana
    if(quantDeNum % 2 == 0) {
        mediana = ( numeros[quantDeNum / 2] + numeros[ quantDeNum /2 - 1] )/2.0;
    }else {
        mediana = numeros[quantDeNum / 2];
    }



   //___________Moda
   int qtd_repeticoes[quantDeNum];

     // Inicializando todas as casas do vetor como 0.
    for(int cont = 0; cont < quantDeNum; cont++){
        qtd_repeticoes[cont] = 0;
    }


    //toda vez que um numero tiver numeros iguais a ele no resto do vetor acrescenta 1 a casa do 
    //vetor que o numero pertence 
    for(int cont1 = 0; cont1 < quantDeNum; cont1++){
        for(int cont2 = 0; cont2 < quantDeNum; cont2++){
            if(numeros[cont1] == numeros[cont2]){
                qtd_repeticoes[cont1]++; 
            }
        }
    }


    //descobrindo qual é a maior repeticao do vetor
    for(int cont = 0; cont < quantDeNum; cont++){
        if(qtd_repeticoes[cont] > maiorNumeroDerep){
            maiorNumeroDerep = qtd_repeticoes[cont];
            PossicaoModa = cont;
        }
    }

    //moda recebe o numero que foi mais repetido
    moda = numeros[PossicaoModa];
    
    //prints
    printf("%d, %.1f", moda, mediana);
    free(numeros);
    
    return 0;
}

