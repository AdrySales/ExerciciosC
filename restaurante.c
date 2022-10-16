#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){


    int numDeProdutos;
    float valor = 0;

    struct produtos{
      int codigo;
      char descricao[10];
      float preco;
    };

   struct pedido{
      int codigo;
      int quantidade;    
    };



    scanf("%d", &numDeProdutos);
    struct produtos produto[numDeProdutos];
    struct  pedido pedidos;

//_________________________________________________________________//
    for(int cont = 0; cont< numDeProdutos; cont++){

        scanf("%d", &produto[cont].codigo);
        scanf(" %[^\n]", produto[cont].descricao);
        scanf("%f", &produto[cont].preco);
    }

 
    
    while(scanf("%d", &pedidos.codigo) && pedidos.codigo != 0){
        scanf("%d", &pedidos.quantidade);
        if(pedidos.quantidade > 0){
            for(int cont = 0; cont < numDeProdutos; cont++){
                if(pedidos.codigo == produto[cont].codigo){
                    valor += produto[cont].preco * pedidos.quantidade;
                }
            }
        }
    }
    
    printf("%.2f", valor);

    return 0;
}