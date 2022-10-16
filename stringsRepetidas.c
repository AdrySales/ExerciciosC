#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

 int existe (char *palheiro, char *agulha, int indice){
 int i, j=0;
 
 for(i=indice; i< strlen(palheiro); i++){
     if(palheiro[i]==agulha[j]){
         j++;
     }else{
         j=0;
     }if(j==strlen(agulha)){
         return i;
     }
 }
     return -1;
 
}

int main() {
    char palheiro[150],agulha[20];
    printf("Informe o palheiro:");
    scanf(" %[^\n]", palheiro);
    printf("Informe a agulha:");
    scanf(" %[^\n]", agulha);
    
    int indice=0,quantidade=0;
    
    do{
        indice=existe(palheiro,agulha,indice);
        if(indice != -1){
            quantidade ++;
        }
        
        
        
    }while(indice != -1);
    
    printf("%d",quantidade);
    
    
}