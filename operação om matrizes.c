#include <stdio.h>
// gcc NomeArquivo.c && ./a.out

int main(){
int n,soma=0;
    scanf("%d",&n);
    int vetor1[n],vetor2[n],vetorR[n],contador=0,cont=0;

    for(int cont1=0;cont1<n;cont1++){
        scanf("%d",&vetor1[cont1]);
    }
    for(int cont2=0;cont2<n;cont2++){
        scanf("%d",&vetor2[cont2]);
    }



   for(int cont3=0;cont3<n;cont3++){
       
//_________________________POSICAO PAR_________________//
       if(cont3==0 || (cont3%2)==0){
          //_______VALOR MAIOR QUE 0___//
          if(vetor1[cont3]>=0){
            contador=cont3;
            while(contador<=n){
            soma+=vetor2[contador];
            contador++;
            }
            
             vetorR[cont3]=soma;
             soma=0;
          //_______VALOR MENOR QUE 0___//  
          }else{
            
            while(cont<n){
            soma+=(vetor2[cont]*vetor1[cont3]);
            cont++;
            }
             vetorR[cont3]=soma;
             cont=0;
             soma=0;
          }
//_________________________POSICAO IMPAR_________________//
       }else{
        //_______VALOR MAIOR QUE 0___//
        if(vetor2[cont3]>=0){
            vetorR[cont3]=vetor2[cont3];
            
        //_______VALOR MENOR QUE 0___//
        }else{
             while(cont<=cont3){
            soma+=(vetor1[cont]-vetor2[cont3]);
            cont++;
            }
             vetorR[cont3]=soma;
               soma=0;
            cont=0;
        }
       }
     
    }
//_________________________PRINT_________________________//
     printf("%d",vetorR[0]);
    for(int cont=1;cont<n;cont++){
        printf(",%d",vetorR[cont]);
    }
    return 0;
}