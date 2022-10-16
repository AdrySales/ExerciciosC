#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *stringBinaria( int numero){
    
    char *string;
    string = (char *) malloc(sizeof(char));

    int num= numero;
    int resto, cont1 = 0, cont2= 0;

    while(num > 1){
        resto = num % 2;
       if(resto==1)    string[cont1] = '1';
       if(resto==0)    string[cont1] = '0';
        num= num/2;
        cont1++;
    }
    string[cont1] = '1';
    string[cont1 + 1] = '\0';

    cont1 = strlen(string) - 1;


    //codigo para colocar os numeros binarios ao contrario (possicao correta)
    char *string_certa = (char *) malloc(sizeof(char));
    
    if(string_certa == NULL){
        printf("Erro ao alocar memoria para string_final.");
        free(string_certa);
        exit(1);
    }

    while(cont1>= 0){
        string_certa[cont2] = string[cont1];
        cont1--;
        cont2++;
    }
    string_certa[cont2] = '\0';
    return string_certa;
}

int main(void){

    int numero;
    scanf("%d",&numero);
  
    char *string_bin;
    string_bin = stringBinaria( numero);

    printf("Numero decimal: %d  \n", numero);
    printf("Numero em binario: %s\n",string_bin);
    free(string_bin);

    return 0;
}