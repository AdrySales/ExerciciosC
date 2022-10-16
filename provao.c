#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
char nome[15];
int numero;
}Candidato;

typedef struct{
char nomeEleitor[15];
int cpf;
}Eleitor;

typedef struct{
Candidato *candidato;
int totalVotos;
}TotalVoto;


//_________________________________________________Carregar Candidatos________________________________//
listaCandidatos carregarCandidatos(char *nomeArq){
 Candidato *deputadoFederal=NULL;
 Candidato *deputadoEstadual=NULL;
 Candidato *senador=NULL;
 Candidato *governador=NULL;
 Candidato *presidente=NULL;

 int qtdCandidatos[5];

 
   FILE *arq = NULL;
   int i;

   arq = fopen("candidatos.txt", "r");
   if (arq == NULL){
      printf("Erro ao abrir o arquivo.\n");
      fclose(arq);
      exit(-1);
   }


   fseek(arq, 0, SEEK_END);

   (*qtd) = (ftell(arq)) / (sizeof(Candidato));

   rewind(arq);

   p = (Candidato *)malloc((*qtd) * sizeof(Candidato *));
   if (p == NULL) {
      printf("Erro ao alocar\n");
      exit(-1);
   }

   for (i = 0; i < (*qtd); i++){
      p[i] = (Candidatos *)malloc(sizeof(Candidatos));
      if (p[i] == NULL) {
         printf("Erro ao alocar\n");
         exit(-1);
      }

      fread(p[i], sizeof(Candidato), 1, arq);
   }
   fclose(arq);
   return p;
}


//_______________________________________Carregar Eleitores_____________________________________//

Eleitor *carregarEleitores(char *nomeArq, int *qtdEleitores){


   Eleitores *eleitores = NULL;
   Eleitores cont;
   FILE *arquivo = fopen(strcat(nomeArq, ".txt"), "r");
   
   if (arquivo == NULL){
      printf("Erro ao abrir o arquivo");
      exit(-1);
   }

   while (fread(&cont, sizeof(Eleitor), 1, arquivo) != ".")
   {
      (*qtdEleitores)++;
      eeitores = (Eleitores *)realloc(eleitores, (*qtdEleitores) * sizeof(Eleitores));
      eleitores[(*qtdEleitores)] = cont;
   }

   fclose(arquivo);
   return eleitores;
   
}



//_______________________________________________Verificar Candidato _________________________________________//

int verificaCandidato(listaCandidatos listaC, Candidato candidatoAt,  int qtdCandidatos){

}

//______________________________________________Verifica Eleitor_____________________________________________//

int verificaEleitor(Eleitor *listaE, Eleitor eleitorAt){


}


//______________________________________________Apresenta Resultado_____________________________________________//
void apresentaResultado(TotalVoto *votos, int qtdCandidatos){

}


//____________________________________________Localiza Candidato___________________________________________________//
Candidato *localizaCandidato(listaCandidatos listaC, Candidato candidatoAt, char *cargo){

}


//______________________________________________________________Main____________________________________________________________//
int main(){

  FILE *Eleitores = NULL;
  FILE *Candidatos = NULL;
  int opc,cpf,verificacaoDeEleitor=0;
  int qtdCandidatos[5];
  Eleitor eleitor=NULL;
  Candidatos candidatos=NULL;
  Candidato candidatoEscolhido;
  int *qtdEleitores;

    printf("_____________Menu de Opcoes________________")
    printf(" Opcao 1 - Votar");
    printf(" Opcao 2 - Apresentar votacao atual");
    printf(" Opcao 3 - Sair");

    scanf("%d",opc);

switch(opc){
    case 1:
    
    do{

    printf("Informe seu CPF: ");
     scanf("%d",&cpf);
     eleitor.cpf=cpf;

     verificacaoDeEleitor=verificaEleitor(*Eleitores,eleitor);

     if(verificacaoDeEleitor==0){
        printf("Eleitor nao cadastrado.\n");

     }else{
      candidatos=listaCandidatos(*Candidatos);



   //____________________________________________Voto Deputado Federal_________________________________________//
     for(int cont=1; cont<quantCandidatos[0];cont++){
           printf("Candidato %[^\n] é deputado Federal e seu número é %d\n", candidatos[cont].nome,candidatos[cont].numero);
        }

    printf("Informe o número do candidato a Deputado Estadual escolhido:");
    scanf("%d",numeroCandidato);
    candidatoEscolhido.numero=numeroCandidato;
    localizaCandidato();


    //____________________________________________Voto Deputado Estadual_________________________________________//
      for(int cont=1; cont<quantCandidatos[0];cont++){
           printf("Candidato %[^\n] é deputado Estadual e seu número é %d\n", candidatos[cont].nome,candidatos[cont].numero);
        }

    printf("Informe o número do candidato a Deputado Estadual escolhido:");
    scanf("%d",numeroCandidato);
    candidatoEscolhido.numero=numeroCandidato;
    

    //____________________________________________Voto Senador___________________________________________________//
      for(int cont=1; cont<quantCandidatos[0];cont++){
           printf("Candidato %[^\n] é Senador e seu número é %d\n", candidatos[cont].nome,candidatos[cont].numero);
        }

    printf("Informe o número do candidato a Senador escolhido:");
    scanf("%d",numeroCandidato);
    candidatoEscolhido.numero=numeroCandidato;

    //____________________________________________Voto Governador________________________________________________//
      for(int cont=1; cont<quantCandidatos[0];cont++){
           printf("Candidato %[^\n] é Governador e seu número é %d\n", candidatos[cont].nome,candidatos[cont].numero);
        }

    printf("Informe o número do candidato a Governador escolhido:");
    scanf("%d",numeroCandidato);
    candidatoEscolhido.numero=numeroCandidato;

    //____________________________________________Voto Presidente___________________________________________________//
      for(int cont=1; cont<quantCandidatos[0];cont++){
           printf("Candidato %[^\n] é Presidente e seu número é %d\n", candidatos[cont].nome,candidatos[cont].numero);
        }

    printf("Informe o número do candidato a Presidente escolhido:");
    scanf("%d",numeroCandidato);
    candidatoEscolhido.numero=numeroCandidato;
   
    
      }
     }

    }while(cpf!=-1);


    

    
    break;  

    case 2:
     apresentaResultado(*votos,qtdCandidatos);

    break;

    case 3:
    close();
    break;

   

}
   


    return 0;
}                                  