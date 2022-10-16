#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

    
int main(){ 
int coordenadaX,coordenadaY;
int quantidade,qtdDesejos;
int distancia=0,coordenada1,coordenada2,dist,aux=0;

struct desejo{    
        char desejos[100];
        int verifica;
};


struct restaurante{    
        char nome[100];
        int xRest,yRest;
        char sabor[100];
        float preco;
}; 


//___________________________________ IA ____________________//
scanf("%d %d",&coordenadaX,&coordenadaY);
scanf("%d",&quantidade);

struct restaurante restaurante[quantidade] ;

for (int cont = 0; cont < quantidade; cont++){
    scanf(" %s %d %d %s %f",restaurante[cont].nome,&restaurante[cont].xRest,
    &restaurante[cont].yRest,restaurante[cont].sabor,&restaurante[cont].preco);
    
}

//_________________________________Desejo__________________//
scanf("%d",&qtdDesejos);

struct desejo desejo[qtdDesejos];

for ( int i = 0; i < qtdDesejos; i++){
    scanf(" %s",desejo[i].desejos);
    desejo[i].verifica=99;

}

//__________________________________________________________//

for (int i = 0; i < quantidade; i++){
distancia=1000;
coordenada1=0;
coordenada2=0;


for ( int cont= 0; cont < quantidade; cont++){

    coordenada1=pow(coordenadaX-restaurante[cont].xRest,2);
    coordenada2=pow(coordenadaY-restaurante[cont].yRest,2);
    dist=sqrt(coordenada1+coordenada2);

    if(dist<=distancia){
        aux=cont;
        distancia=dist;
    }
    
}

coordenadaX=restaurante[aux].xRest;
coordenadaY=restaurante[aux].yRest;

restaurante[aux].xRest=10000;
restaurante[aux].yRest=10000;

printf("%s\n",restaurante[aux].nome);

for (int cont= 0; cont <qtdDesejos ; cont++){
    if (strlen(restaurante[aux].sabor)==strlen(desejo[cont].desejos)){
       desejo[cont].verifica=10;
    }
    
}


}
//_______________________ PRINTS____________________//
for ( int cont = 0; cont < qtdDesejos ; cont++){
  
    if(desejo[cont].verifica!=10){
        printf("Vou fazer as que faltaram quando chegar em casa");
        return 0;
    }
    
}

printf("Completou a lista");


  return 0;
}