#include <stdio.h>
#include <stdlib.h>

int main(){

    int tamMaximo, tamDesejado, tamBytes;
    scanf(" %d \n %d \n %d", &tamMaximo,&tamDesejado,&tamBytes);

    int tamVetor = (tamDesejado/tamBytes),tamVetorMaximo = (tamMaximo/tamBytes);

    if(tamMaximo >= 1){
        if(tamVetorMaximo >= tamDesejado) {
            printf("Criando vetor com %d posicoes.", tamDesejado); 
        }else {
            printf("Impossivel criar! Criando vetor com %d posicoes.", tamVetorMaximo);
    }
    }else {
        printf("Impossivel criar! Criando vetor com %d posicoes.", tamVetorMaximo);
    }
    return 0;
}
