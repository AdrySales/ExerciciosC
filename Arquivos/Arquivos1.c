#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    FILE *arquivo;
    int n,m;
    int *somaLinha,*somaColuna,a;

    arquivo = fopen("matriz.txt","r");
    fscanf(arquivo,"%d %d",&n,&m);
    
    somaLinha=calloc(n,sizeof(double));
    somaColuna=calloc(m,sizeof(double));
     
    for(int cont1=0; cont1<n; cont1++){
        for(int cont2=0; cont2<m; cont2++){
            fscanf (arquivo,"%1d",&a);
            somaLinha[cont1]+=a;
            somaColuna[cont2]+=a;
        }
    }

    for(int cont1=0; cont1<n; cont1++){
        printf("Soma Linha: %d\n",somaLinha[cont1]) ;
    }     
    for(int cont2=0; cont2<m; cont2++){
        printf("Soma Coluna:%d\n",somaColuna[cont2]);
    }
    
    free(somaLinha);
    free(somaColuna);
    
    fclose(arquivo);


    return 0;
}
