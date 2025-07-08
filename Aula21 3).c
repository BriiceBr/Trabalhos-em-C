#include<stdio.h>
#include<stdlib.h>
// 3. Faça um programa para copiar um arquivo de texto. O arquivo de destino deve ser criado.

main () {
    FILE *arq, *txt;
    char ch;

    arq = fopen("Exercicio3.txt", "r");
    if(arq == NULL) {
        printf("ERRO AO ABRIR ARQUIVO!");
        exit(1);
    }
    printf("Conteudo de origem:");
    ch = fgetc(arq);
    while(!feof(arq)) {
        printf("%c", ch);
        ch = fgetc(arq);
    }
    fseek(arq, 0, SEEK_SET);

    txt = fopen("Exercicio3b", "w+");

    while ((ch = fgetc(arq)) != EOF) {
        fputc(ch, txt);
    }
    fseek(arq, 0, SEEK_SET);
    fseek(txt, 0, SEEK_SET);

    printf("\nConteudo copiado: ");
    while ( (ch = fgetc(txt)) != EOF) {
        printf("%c", ch);
    }

    fclose(txt);
    fclose(arq);
}
