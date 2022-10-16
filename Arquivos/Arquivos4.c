#include <stdio.h>


/*código a seguir é um exemplo de leitura, que conta o
 número de letras „a‟ no arquivo file.txt.*/
int main() {
FILE *fp;
char c;
int n = 0;
if ((fp=fopen ("arquivoCaracteres.txt","r")) != NULL) {
while( (c=fgetc(fp)) !=EOF) {
if (c=='a' || c=='A') n++;
}
}
fclose(fp);
printf("Existem %d letras a no arquivo.\n", n);



return 0;
}