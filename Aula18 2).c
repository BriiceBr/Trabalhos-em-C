#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*  Escreva um programa que leia duas strings e um valor N. O programa deve copiar os
conteúdos das strings lidas para outra string, inserindo a segunda dentro da primeira, a partir
da posição indicada por N. Por exemplo, lidos “A aula”, “outra ” e 2, a string resultante deve
ficar “A outra aula”. A string que receberá os conteúdos deve ser alocada de forma a ter o
tamanho exato de acordo com o conteúdo que receberá. */

int main () {
    int n, i;
    char string1[100], string2[100], *string3;

    printf("Digite a primeira string: ");
    gets(string1);
    fflush(stdin);
    printf("Digite a segunda string: ");
    gets(string2);
    fflush(stdin);
    printf("Digite o valor N: ");
    scanf("%d", &n);

    printf("%s %s %d", string1, string2, n);

    int elementos, e1 = 0, e2 = 0;

    for(i = 0; string1[i] != '\0' ; i++) {
        e1++;
    }
    for(i = 0; string2[i] != '\0' ; i++) {
        e2++;
    }

    elementos = e1 + e2 + 1;

    string3 = (char*) malloc((elementos) * sizeof(char));

    for(i = 0; i < n; i++) {
        *(string3+i) = string1[i];
    }

    string3[n] = '\0';

    strcat(string3, string2);

    strcat(string3, string1 + n); // String1 é um ponteiro com o endereço de um vetor, o + n corrige o ponteiro para + tantas casas ao lado

    printf("\n%s", string3);

    free(string3);
}
