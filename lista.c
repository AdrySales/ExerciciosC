#include <stdio.h>

int main() {

//____________________________________Primeira Questão__________________________________//
   char c = 'a';
   char *pc = &c;

   printf("\n\n");
    printf("Primeira Questão:\n");
   // _____________Letra A _____________________//
   printf("Letra A:\n");
   printf("O endereco c: %p\n", &c);
   printf("O valor c: %c\n",c);

  // _____________Letra B _____________________//
   printf("\nLetra B:\n");
   printf("O valor de pc: %p\n",pc);
   printf("O valor guardado no endereco apontado por pc: %c\n", *pc);

  // _____________Letra C _____________________//
   printf("\nLetra C:\n");
   printf("O endereco de pc: %p\n", &pc);

  // _____________Letra D _____________________//
   printf("\nLetra D:\n");
   printf("O endereco do valor guardado no endereco apontado por pc: %p\n", &(*pc));
   printf("O valor guardado no endereco pc: %p\n", *(&pc));

/**“Desferenciar” um ponteiro é do acessar o valor que está armazenado no endereço de memória 
armazenado pelo ponteiro. Esta operação é feita pelo operador. **/


// _____________Letra E _____________________//
/* O operador '&' retorna o endereço da variavel.
   O * mostra o valor que está armazenado na variavel que o ponteiro esta apontando.
  
   Quando se armazena o endereço de uma variavel em um ponteiro e o ponteiro é chamado com o '*', isso é a mesma coisa
   que printar a variável.

    Eles são iguais pois o valor guardado no endereço de pc é o propio endereço que pc guarda, logo
    *(&pc) == pc == &c. E também, porque o endereço do valor guardado no endereço 
    apontando por pc é igual a o endereço de c, por tanto (&c) que é o que pc guarda.
    Sendo assim, as duas formas esntão printando o endereço de c ou printando pc.
   
    */


   printf("\n\n");



//____________________________________Segunda Questão__________________________________//
   int vet[5] = {1, 2, 3, 4, 5};
   int *p = &vet;

   printf("\n\n");
   printf("Segunda Questão:\n");

   // _____________Letra A _____________________//
   printf("Letra A:\n");
   printf("end vet: %p\n", &vet);
   printf("end p: %p\n", p);

   // _____________Letra B _____________________//
   printf("\nLetra B:\n");
   for (int i = 0; i < 5; i++) {
      printf("%d ", p[i]);
   }

    // _____________Letra C _____________________//
   printf("\n\nLetra C:\n");
   for (int i = 0; i < 5; i++) {
      printf("%d ", *(p + 1));
   }

    // _____________Letra D _____________________//
   printf("\n\nLetra D (b):\n");
   for (int i = 0; i < 5; i++) {
      printf("%d ", vet[i]);
   }

   printf("\n\nLetra D (c):\n");
   for (int i = 0; i < 5; i++) {
      printf("%d ", *(vet + i));
   }


   printf("\n\n");




//____________________________________Terceira Questão__________________________________//
   
   char str[50]; 
   char str_inv[50]; 
   char *ptr_str = str;
   char *ptr_inv = str_inv;
   int i = -1;

   scanf(" %s", str);


 // _____________Letra A _____________________//
   while (*(ptr_str) != '\0') {
      ptr_str++;
      i--;
   }

   while (i != 0) {
      *(ptr_inv) = *(ptr_str - 1);
      ptr_str--;  
      ptr_inv++; 
      i++;
   }

   printf(" O inverso da string : %s\n\n", str_inv);
   free(ptr_str);
   free(str_inv);

 // _____________Letra B_____________________//

 // Como str é uma string não se faz necessário o uso do &






//____________________________________Quarta Questão__________________________________//
 char palavra[20];
 int cont, tam, cont1, cont2, som= 1;
 char **p = (char **)malloc(sizeof(char *));
   
 p[0] = (char *)malloc(sizeof(char));

   if (p[0] == NULL) {
      printf("Erro\n");
      free(p[0]);
      free(p);
      return 0;
   }

   cont = 0;
   cont1 = 0;


   while (scanf(" %s", palavra) != EOF) {

      tam = strlen(palavra);
      p = (char **)realloc(p, (cont + 1) * sizeof(char *));
      p[cont1] = (char *)realloc(p[cont1], tam * sizeof(char));


      if (p[cont1] == NULL) {
         printf("Erro ao Realocar\n");

         for (i = cont1; cont2 <= 0; cont2--) {
            free(p[cont2]);
         }

         free(p);
         return 0;
      }

      strcpy(p[cont1], palavra);
      cont++;
      cont1++;
   }

   while (cont != 0) {
      printf("Palavra na posicao %d = %s\n",som, p[som - 1]);
      free(p[som- 1]);
      cont--;
      som++;
   }

   free(p);




   return 0;
}
