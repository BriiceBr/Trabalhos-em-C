#include<stdio.h>
#include<stdlib.h>
/* 1. Faça um programa que compara dois arquivos, letra por letra, e escreve na tela a posição da
primeira diferença. O programa deve informar também se um dos arquivos está contido no
outro, ou seja, se eles têm tamanho diferente, mas não há diferença até que o menor termine */

void comparar(FILE *txt1, FILE *txt2) {
    char ch1, ch2;
    int pos = 1;
    while ( (ch1 = fgetc(txt1)) != EOF && (ch2 = fgetc(txt2)) != EOF) {
        if (ch1 != ch2) {
            printf("\nA posicao da primeira diferenca e %d", pos);
            return;
        }
        pos++;
    }

    ch2 = fgetc(txt2); // bug de nao ler a segunda condicao

    if (feof(txt2) && feof(txt1)) {
        printf("\nOs arquivos são exatamente iguais");
        return;
    }
    if (feof(txt1) && !feof(txt2)) {
        printf("\nArquivo 1 -> Arquivo 2");
        return;
    }
    else {
        printf("\nArquivo 2 -> Arquivo 1");
        return;
    }

}


main () {
    FILE *arq1, *arq2;

    arq1 = fopen("texto1.txt", "r");
    arq2 = fopen("texto2.txt", "r");

    if (arq1 == NULL) {
        printf("ERR0: Nao foi possivel abrir o arquivo 1");
        exit(1);
    }
    if (arq2 == NULL) {
        printf("ERR0: Nao foi possivel abrir o arquivo 2");
        exit(1);
    }

    printf("Conteudo do arquivo 1:");
    char c = fgetc(arq1);
    while (!feof(arq1)) {
    printf("%c", c);
    c = fgetc(arq1);
    }

    printf("\nConteudo do arquivo 2:");
    c = fgetc(arq2);
    while(!feof(arq2)) {
        printf("%c", c);
        c = fgetc(arq2);
    }
    rewind(arq1);
    rewind(arq2);

    comparar(arq1, arq2);

    fclose(arq1);
    fclose(arq2);

}
