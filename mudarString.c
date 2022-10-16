#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  

int main(){
    char texto[200],busca[100],substituto[100];
    char arrayDePalavras[200][10]={0,0};
    char palavraAux[10];
     int contador=0,contador2=0,quantDePalavras=0;

    scanf(" %[^\n]",texto);
    scanf(" %[^\n]",busca);
    scanf(" %[^\n]",substituto); 

    
    int tamanhoTexto=strlen(texto);

     for(int cont=0;cont<tamanhoTexto;cont++){
        
       while(texto[cont]!=' '){
        arrayDePalavras[contador][contador2]=texto[cont];
        contador2++;
        cont++;
       }
       quantDePalavras++;
       contador2=0;
       contador++;
     }
   

     
      
       for(int cont=0;cont<quantDePalavras;cont++){
      
        if(strcmp(arrayDePalavras[cont],busca )==0){
         strcpy(arrayDePalavras[cont],substituto);
      
        }
         int contador=0;
        for(int cont1=0;cont1<strlen(arrayDePalavras[cont]);cont1++){
           if(arrayDePalavras[cont]==busca[contador]){
            contador++;
            palavraAux[cont1]=busca[contador];

           }if(arrayDePalavras[cont]!=busca[contador] && contador<strlen(substituto)){
              contador=0;
              busca[contador]=arrayDePalavras[cont][cont1];

           }if(strcmp(arrayDePalavras[cont],busca[contador] )!=0 && contador==strlen(substituto)){
              
              busca[contador]=arrayDePalavras[cont][cont1];

           }
          
        }
        
    
     }


       for(int cont=0;cont<tamanhoTexto;cont++){
        printf("%s ",arrayDePalavras[cont]);
        
     }


    return 0;
}


