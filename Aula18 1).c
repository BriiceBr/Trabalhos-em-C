#include<stdio.h>
#include<stdlib.h>

/* Escreva programa que leia um vetor de 500 elementos inteiros. A seguir, o programa deve
construir 3 novos vetores, o primeiro contendo os elementos do vetor lido que ao serem
divididos por 3 apresentem resto igual a 2, o segundo contendo os elementos do vetor lido que
ao serem divididos por 3 apresentem resto igual a 1, e o terceiro contendo os elementos do
vetor lido que ao serem divididos por 3 apresentem resto igual a 0. Os três vetores devem ser
criados dinamicamente, e seus tamanhos devem estar de acordo com os inteiros que irão
conter.
*/

#define TAM 5
main () {
    int vet[TAM], i;

    printf("Digite os numeros inteiros do vetor: ");
    for(i = 0; i < TAM; i++) {
        scanf("%d", &vet[i]); }
    for(i = 0; i < TAM; i++) {
        printf("%d, ", vet[i]); }

    // contar quant de numeros para dps fazer a conta no malloc
    int restos0, restos1, restos2;

    for(i = 0; i < TAM; i++) {
        if (vet[i] % 3 == 2) {
            restos2++;
        }
        else { if (vet[i] % 3 == 1) {
                    restos1++;
                } else {
                    restos0++;
                    }
            }
    }

    //criando vetores
    int *resto2, *resto1, *resto0;

    resto2 = malloc(restos2 * sizeof(int));
    resto1 = malloc(restos1 * sizeof(int));
    resto0 = malloc(restos0 * sizeof(int));


    printf("\n\nResto 2\n");
    //resto 2
    for(i = 0; i < TAM; i++){
        if (vet[i] % 3 == 2) {
            *resto2 = vet[i];
            printf("%d, ", *resto2);
            resto2++; }
    }
    printf("\n\nResto 1\n");

    //resto 1
    for(i = 0; i < TAM; i++){
        if (vet[i] % 3 == 1) {
            *resto1 = vet[i];
            printf("%d, ", *resto1);
            resto1++; }
    }
    printf("\n\nResto 3\n");
    //resto 0
    for(i = 0; i < TAM; i++){
        if (vet[i] % 3 == 0) {
            *resto0 = vet[i];
            printf("%d, ", *resto0);
            resto0++;}
    }


}
