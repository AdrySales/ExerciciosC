#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char nome[40];
  float salario;
  int horas;
}funcionario;

int main(void){
  
  funcionario funcionario[30];
  int contador = 0, qtdDeFunc = 0;
  float bonus;

   while(scanf(" %[^\n]", funcionario[contador].nome) != EOF){
     scanf("%f", &funcionario[contador].salario);
     scanf("%d", &funcionario[contador].horas);
     contador++;
     qtdDeFunc++;
   }

  for(contador = 0; contador < qtdDeFunc; contador++){
     if(funcionario[contador].horas > 6 && funcionario[contador].horas <= 12){
     
       bonus = (funcionario[contador].horas * 0.1) / 12.0;
       funcionario[contador].salario += funcionario[contador].salario * bonus;
     }

    printf("%s - R$%.2f\n", funcionario[contador].nome, funcionario[contador].salario);
  }

  return 0;
}