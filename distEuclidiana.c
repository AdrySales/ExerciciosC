#include <stdio.h>
#include <math.h>

int main(){
    
    float primeiroVetor[2], segundoVetor[2], distancia, pontoUm, pontoDois ;
    
    //primeiro vetor
    scanf("%f", &primeiroVetor[0]);
    scanf("%f", &primeiroVetor[1]);
    
    //srgundo vetor
    scanf("%f", &segundoVetor[0]);
    scanf("%f", &segundoVetor[1]);
    
    //calculando
    pontoUm = pow((primeiroVetor[0] - segundoVetor[0]), 2);
    pontoDois = pow((primeiroVetor[1] - segundoVetor[1]), 2);  
    distancia = sqrt(pontoUm + pontoDois);
    
    //print
    printf("%.1f", distancia);
    
    return 0;
}