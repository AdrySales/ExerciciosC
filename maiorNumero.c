#include <stdio.h>

int main(){

    int numeros[5],aux;
    
    
    for(int contador = 0; contador < 5; contador++){
        scanf("%d", &numeros[contador]);
    }
    

    
    for(int cont1 = 0; cont1< 5; cont1++){
        for(int cont2 =1; cont2 < 5; cont2++){

            if(numeros[cont2] > numeros[cont1]){
                
                aux = numeros[cont1];
                numeros[cont1] = numeros[cont2];
                numeros[cont2] = aux;
            }
        }
    }
    
    printf("Maior Numero: %d", numeros[0]);
    return 0;
}