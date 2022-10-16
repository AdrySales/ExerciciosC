#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char Placa[6];
}Caminhao;

typedef struct {
  int codigo;
  float loc_x,loc_y;
  Caminhao *caminhao;
  int n_caminhao;
}Filial;

typedef struct{
  float origem_x,origem_y;
  float destino_x,destino_y;
}Produto;

//_______________________________Funções______________________________________//
 
 
 
 //________________________Remover Caminhao_________________________//
 Caminhao remover_caminhao(Filial *filiais, int codigo_filial){
  


    return;

 }

 //______________________Cadastro de FIlial_____________________//
 Filial *cadastrar_filial(Filial *filiais, int *n_filiais){
   int aux, i;
    printf("Quantas Filiais você  quer adicionar ? ");
    scanf("%d", &aux);
    (*n_filiais) = (*n_filiais) + aux;

    filiais = realloc(filiais, (*n_filiais) * sizeof(Filial));
    if (filiais == NULL)
    {
        printf("erro de alocaçao. \n");
        exit(-1);
    }
  
    return filiais;

 }

//__________________ __Cadastro de Caminhao__________________________//
 void cadastrar_caminhao(Filial *filiais, Caminhao caminhao, int codigo_filial){
 
 int i;
 int qtdFiliais=filiais;
    for (i = 0; i < qtdFiliais; i++){

        if (strcmp(filiais[i].codigo, codigo_filial) == 0){
            filiais[i].n_caminhao++;
            filiais[i].caminhao = (Caminhao *)realloc(filiais[i].caminhao, (filiais[i].n_caminhao + 1) * sizeof(Caminhao));
            filiais[i].caminhao[filiais[i].n_caminhao - 1] = caminhao;
        }
    }


  
 }
 void realizar_entrega(Filial *filiais, Produto produto, int n_filiais){

 }

 //_____________________Imprimir Filiais______________________________//
 void imprimir_filiais(Filial *filiais, int n_filiais){
 for (int i = 0; i < n_filiais; i++) {
        printf("Filial %dº\n", i + 1);
        printf("  Codigo: %s\n", filiais[i].codigo);
        printf("  Quantidade de caminhoes: %d\n", filiais[i].n_caminhao);
       
        if (filiais[i].n_caminhao> 0){
            Caminhao *aux =filiais[i].caminhao;
            printf(" Caminhoes: ");
            for (int cont = 0; cont < filiais[i].n_caminhao; cont++)
            {
                printf(" %s", aux[cont].Placa);
            }
            printf("\n");
        }

    }
 }

//_______________________________Main________________________________//
int main(){
   Filial *filiais = NULL;
    Caminhao novoCaminhao;
    int qtdFiliais = 0,codigo_filial;
    int opcao,codigo_filial;

printf("___Escolha uma das opções____");
printf("1 - Remover Caminhao.");
printf("2 - Cadastrar Filial.");
printf("3 - Cadastrar Caminhao");
printf("4 - Realizar Entrega.");
printf("5 - Imprimir Filiais.");
scanf("%d",&opcao);

switch (opcao)
{
case 1:
  printf("Informe o código da filial que você deseja remover: ");
  remover_caminhao(filiais,&codigo_filial);
    break;
  

case 2:
  filiais = cadastrar_filial(filiais, &qtdFiliais);
  break;

case 3:
    printf("Cadastro de Caminhao\n");
            printf(" Digite a placa do caminhao: ");
            scanf(" %[^\n]", novoCaminhao.Placa);
             printf(" Informe o codigo da filial ao qual o caminhao pertence: ");
             scanf("%d",codigo_filial);
            cadastrar_caminhao(filiais, novoCaminhao, codigo_filial);
          
  break;

case 4:
  
  break;


case 5:
  print_comp(filiais, &qtdFiliais);
  break;

default:
  break;
}
 
    return 0;
}