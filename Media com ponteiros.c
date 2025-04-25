#include<stdio.h>


void media(int *x, int *y) {
    float media;
    int aux;

    media = (float) (*x+*y) / 2; // ou "2.0"
    aux = media;

 /*   if (media % 2 == 0) {             // NAO PODE!!! pois media é float e nao existe o conceito de "RESTO"
        printf("INTEIRO");
       *x = media;
       *y = media;
 }  */


    if (media-aux > 0) {          // EXEMPLO: 9 + 6 = 15 / 2 = 7,5. (7,5 - 7) = 0,5 > 0 = nao eh inteiro
        *x = media;
        *y = media+1;
    }
    else {
      *x = *y = aux;
    }

}

main () {

    int x, y;

    printf("Digite 2 valores inteiros: ");
    scanf("%d - %d", &x, &y);

    media(&x, &y);

    printf("O resultado é: %d e %d", x, y); // tem que ser "&" pois temos que mudar 2 variaveis
 }
