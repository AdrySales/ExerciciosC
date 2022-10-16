#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nomeAux[15] = {};
    float vant_aux;

    struct pokemon{
       char nome[15];
       char tipo[10];
       int ataque;
       int defesa;
       int vantagem;
    };

    struct fator_vantagem{
       char nome[15];
       float fatorVantagem;
       int vantagem;
    };


//_________ __________________________ INIMIGO__________________________________//
    struct pokemon poke_inimigo;
    scanf(" %s %s %d %d", poke_inimigo.nome, poke_inimigo.tipo, &poke_inimigo.ataque, &poke_inimigo.defesa);




//____________________________ Quantidade de Pokemons __________________________//
    int qtdPokemon;
    float ataque_aux;

    scanf("%d", &qtdPokemon);

    struct pokemon poke_do_ash[qtdPokemon];
    struct fator_vantagem vantagem[qtdPokemon];


//___________________________________ Lista de Pokemons do Ash _____________________________________  //
    for(int i = 0; i < qtdPokemon; i++){
       
        scanf(" %s %s %d %d", poke_do_ash[i].nome, poke_do_ash[i].tipo, &poke_do_ash[i].ataque, &poke_do_ash[i].defesa);
        poke_do_ash[i].vantagem = 0;
        ataque_aux = poke_do_ash[i].ataque;
         
         //___________  Verifica Agua e fogo ___________//
        if(strcmp(poke_do_ash[i].tipo, "agua") == 0){

            if(strcmp(poke_inimigo.tipo, "fogo") == 0){
               poke_do_ash[i].vantagem = 1;
            } 

            if(poke_do_ash[i].vantagem == 1){
                ataque_aux = ataque_aux + ataque_aux/2;
            }
        }
        //___________  Verifica Agua e grama ___________//
         else if(strcmp(poke_do_ash[i].tipo, "grama") == 0){

            if(strcmp(poke_inimigo.tipo, "agua") == 0) {
                poke_do_ash[i].vantagem = 1;
            }

            if(poke_do_ash[i].vantagem == 1){
                 ataque_aux = ataque_aux + ataque_aux/2;
            }
        }
        //___________  Verifica grama e fogo ___________//
        else if(strcmp(poke_do_ash[i].tipo, "fogo") == 0){

            if(strcmp(poke_inimigo.tipo, "grama") == 0){
                poke_do_ash[i].vantagem = 1;
            }

            if(poke_do_ash[i].vantagem == 1){
                 ataque_aux = ataque_aux + ataque_aux/2;
            }
        }

       //________________ ______________________________//
        vantagem[i].fatorVantagem = ataque_aux - poke_inimigo.defesa;
        vantagem[i].vantagem = poke_do_ash[i].vantagem;
        strcpy(vantagem[i].nome, poke_do_ash[i].nome);
    }



//_________________________________________________________________________________________________________//
    for(int cont1 = 0; cont1< qtdPokemon; cont1++){
        for(int cont2 = cont1 + 1; cont2 < qtdPokemon; cont2++){


            //___________________________________________________________________//
            if(vantagem[cont2].fatorVantagem > vantagem[cont1].fatorVantagem){
            
                strcpy(nomeAux, vantagem[cont2].nome);
                strcpy(vantagem[cont2].nome, vantagem[cont1].nome);
                strcpy(vantagem[cont1].nome, nomeAux);

                vant_aux = vantagem[cont2].fatorVantagem;
                vantagem[cont2].fatorVantagem = vantagem[cont1].fatorVantagem;
                vantagem[cont1].fatorVantagem = vant_aux; 
            }

            //___________________________________________________________________//
            else if(vantagem[cont2].fatorVantagem == vantagem[cont1].fatorVantagem){

                if(vantagem[cont2].vantagem == 1 && vantagem[cont1].vantagem == 0){

                    strcpy(nomeAux, vantagem[cont2].nome);
                    strcpy(vantagem[cont2].nome, vantagem[cont1].nome);
                    strcpy(vantagem[cont1].nome, nomeAux);

                    vant_aux = vantagem[cont2].fatorVantagem;
                    vantagem[cont2].fatorVantagem = vantagem[cont1].fatorVantagem;
                    vantagem[cont1].fatorVantagem = vant_aux;
                }
            }
        }
    }


//_________________ ___________Prints ___________________________//
    for(int cont = 0; cont < qtdPokemon; cont++){
        printf("%d. %s\n", cont+1, vantagem[cont].nome);
    }

    return 0;
}