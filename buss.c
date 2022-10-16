
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
 int  j, contador=0, a=0, idades=0;
 float media = 0;

 struct Passageiro{
   int numPassagem;
   char data[20];
   char de[50];
   char para[50];
   char horario[20];
   int poltrona;
   int idade;
   char nome[50];
} ;
struct Passageiro passageiros[44];


   while ((scanf("%d", &a) != -1) && contador< 44) {

      passageiros[contador].numPassagem = a;
      scanf(" %s", passageiros[contador].data);
      scanf(" %49[^\n]", passageiros[contador].de);
      scanf(" %49[^\n]", passageiros[contador].para);
      scanf(" %s", passageiros[contador].horario);
      scanf("%d", &passageiros[contador].poltrona);
      scanf("%d", &passageiros[contador].idade);
      scanf(" %49[^\n]", passageiros[contador].nome);

      idades += passageiros[contador].idade ;
      a = 0;
      contador++;
   }

   media = (float) idades/contador;

   for (int i = 0; i < contador; i++) {
      if(passageiros[i].poltrona % 2 == 0 && passageiros[i].idade > media){
         printf("%s\n", passageiros[i].nome);
      } 
   }

   return 0;
}