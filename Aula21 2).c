#include<stdio.h>
#include<stdlib.h>
/* 2. Escreva um programa que leia um nome de um arquivo e um caractere, e verifique quantas
vezes o caractere aparece no arquivo. */

int verificar(FILE *txt, char c) {
    char aux;
    int cont = 0;

    while(!feof(txt)) {
        aux = fgetc(txt);
        if (aux == c) {
            cont++;
        }
    }
    return cont;
}

main () {
    FILE *arq;
    char c, ch;

    printf("Digite um caractere:");
    scanf("%c", &c);


    arq = fopen("Exercicio2.txt", "r");
    if (arq == NULL) {
        printf("\nERRO AO ABRIR O ARQUIVO");
        exit(1);
    }
    printf("Conteudo do arquivo:");
    ch = fgetc(arq);
    while(!feof(arq)) {
        printf("%c", ch);
        ch = fgetc(arq);
    }
    rewind(arq);

    int n;
    n = verificar(arq, c);

    printf("\nO caractere aparece %d vezes", n);
    fclose(arq);
}
