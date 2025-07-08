#include<stdio.h>
#include<stdlib.h>

/* Leia um vetor de 100 números reais (ponto flutuante). A partir deste vetor, crie outros dois,
um para conter os números maiores ou iguais à média, e outro para os números menores que
a média dos valores do vetor original. Estes dois vetores devem ser alocados dinamicamente e
ter o menor tamanho possível. */

main () {
    float v[10] = {2.3, 1.56, 1.2, 7.43, 8, 12.4, 7, 4.31, 7.87, 0.56}, *vmenor, *vmaior, media, soma = 0;
    int i, cont1 = 0, cont2 = 0;

   /* printf("Digite 10 numeros reais: ");
    for(i = 0; i < 10; i++){
        scanf("%f", &v[i]);
    }
    printf("\n")*/

    for(i = 0; i < 10; i++){
        printf("%.2f, ", v[i]);
    }

    for(i = 0; i < 10; i++){
        soma += v[i];
    }
    media = soma/10;
    printf("\nA media e: %f", media);

    for(i = 0; i < 10; i++) {
        if (v[i] < media) {
            cont1++;
        }
        else {
            cont2++;
        }
    }
    vmenor = (float*) malloc(cont1 * sizeof(float));
    vmaior = (float*) malloc(cont2 * sizeof(float));

    int j, k;

    for(k = 0, j = 0, i = 0; i < 10; i++) {
        if (v[i] < media) {
            vmenor[j] = v[i];
            j++;
        }
        else {
            vmaior[k] = v[i];
            k++;
        }
    }
    printf("\nVetor menor\n");
    for(i = 0; i < cont1; i++) {
        printf("%.2f,", vmenor[i]);
    }

    printf("\nVetor maior\n");
    for(i = 0; i < cont2; i++) {
        printf("%.2f,", vmaior[i]);
    }

    free(vmenor);
    free(vmaior);
}

