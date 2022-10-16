#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
   int dia;
   int mes;
   int ano;
}Data;


void datando( Data dataAux, Data *data, int indice){
 data->dia=dataAux.dia;
 data->mes=dataAux.mes;
 data->ano=dataAux.ano;
}

int main(void){
    Data *data;
    int dia,mes,ano;
    int indice=0;
    Data dataAux;
    scanf("%d/%d/%d",&dataAux.dia,&dataAux.mes,&dataAux.ano);
  
    datando(dataAux,data,indice);

    return 0;
}