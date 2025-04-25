#include<stdio.h>


void media(int *x, int *y) {
    float media;
    int aux;

    media = (*x+*y) / 2.0 ; // ou "2.0"
    printf("%.2f", media);
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
      *x = *y = media;
    }

}

main () {

    int x, y;

    printf("Digite dois valores inteiros: ");
    scanf("%d ", &x);
    scanf("%d", &y);

    media(&x, &y);

    printf("O resultado é: %d e %d", x, y); // tem que ser "&" pois temos que mudar 2 variaveis
 }
