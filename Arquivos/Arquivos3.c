#include <stdio.h>

int main() {
    FILE *arquivo;
    char c;

    arquivo = fopen("arquivoCaracteres.txt", "r");
    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo.txt\n");
        return 1;
    }

    /* lê até receber um EOF. receber um EOF não significa que o fgetc
       leu até alcançar o fim do arquivo. erros também retornam EOF. */
    while(fgetc(arquivo)!= EOF){
    
    if(feof(arquivo)==0) {
        puts("O arquivo inteiro foi lido.");
    } else {
        puts("O indicador de fim de arquivo (EOF) não está marcado. Um erro ocorreu.");
    }
}
    fclose(arquivo);

    return 0;
}
