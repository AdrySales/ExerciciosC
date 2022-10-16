#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/*LÊ A QUANTIDADE DE CARACTERES E PALAVRAS DE UM ARQUIVO*/

int main(){
 FILE *arquivo;
 arquivo=fopen("arquivoCaracteres.txt","r");
 int quantCaracteres=0,quantPalavras=0;
 char letra;

while( (letra=fgetc(arquivo)) !=EOF) {
if (letra != ' ') quantCaracteres++;
if (letra == ' ') quantPalavras++;
}
quantPalavras++;

fclose(arquivo);

printf("Existem %d letras no arquivo.\n", quantCaracteres);
printf("Existem %d palavras no arquivo.\n", quantPalavras);

return 0;
}