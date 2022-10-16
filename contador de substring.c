#include <stdio.h>
#include <string.h>
#define tamanho 151

int main(void){

  

//_________________________Palheiro________________________________//
   char palheiro[tamanho], procurar[tamanho] = {};
    //limpa buffer
    fflush(stdin); 
    //pega string
    fgets(palheiro, tamanho, stdin); 
    //limpa buffer
    fflush(stdin); 

    //pega o tamanho de palheiro,atribui espaco em branco a ultima possição de palheiro, e depois pega o novo tamanho de palheiro 
    int tamPalheiro = strlen(palheiro); 
    palheiro[tamPalheiro - 1] = '\0'; 
    tamPalheiro = strlen(palheiro);
     // Transforma todos os caracteres em minusculo
    for(int j = 0; j < tamPalheiro; j++){
            if(palheiro[j] >= 65 && palheiro[j] <= 90) palheiro[j] += 32; 
        
        }

//_________________________Agulha________________________________//
    char agulha[tamanho];
    //limpa buffer
    fflush(stdin);
     //pega string
    fgets(agulha, tamanho, stdin);
     //limpa buffer
    fflush(stdin);

    //pega o tamanho de agulha
    int tamAgulha = strlen(agulha);
    // Transforma todos os caracteres em minusculo
    for(int i = 0; i < tamAgulha; i++){
        if(agulha[i] >= 65 && agulha[i] <= 90) agulha[i] += 32;
    }



//______________________Comparacao__________________________________//
    int i = 0, substring = 0;
    
    while(i < tamPalheiro){
        int k = i;
       
        for(int j = 0; j < tamAgulha; j++){
            procurar[j] = palheiro[k];
            k++;
        }
        if(strcmp(agulha, procurar) == 0) substring++;
        i++;
    }


//______________________________PRINT_________________________________//
    printf("%d\n", substring);

    return 0;
}