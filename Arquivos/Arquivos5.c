#include <stdio.h>

int main() {
    FILE *arquivo;
    int vetor[10];

    for(int cont=0;cont<10;cont++){
        scanf("%d",&vetor[cont]);
    }
    
    arquivo = fopen("arquivoCaracteres.txt", "r");



    fclose(arquivo);
    return 0;
}
