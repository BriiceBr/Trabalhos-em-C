#include<stdio.h>
#include<stdlib.h>

/*3. Escreva um programa que leia uma string e copie o conteúdo da string lida para outra
eliminando uma letra para cada par de letras adjacentes iguais.
Por exemplo, lida a string “assassino”, a nova deve ser “asasino”.
A string de destino deve ter exatamente o tamanho necessário para armazenar o conteúdo que
será copiado para ela*/

#define tam 100

char* elimina(char *s) {
    char *s2;
    int i, tamanho = 1; // começa em 1 por causa do '\0'

    for(i = 0; s[i] != '\0'; i++) {
        tamanho++;
    }
    int tamaux = tamanho;

    for(i = 0; i < tamaux-1; i++) {
        if (s[i+1] == s[i]) {
            tamanho--;
        }
    }
    s2 = (char*) malloc(tamanho * sizeof(char));
    int j;
    for(i = 0, j = 0; i < tamaux-2; i++) {
        if (s[i+1] == s[i]) {
            }
        else {
            s2[j] = s[i];
            j++;
        }
    }
    s2[j] = s[tamaux-2];
    j++;
    s2[j] = '\0';
    return s2;
}

main () {
    char str[tam], *str2;
    printf("Digite uma string: ");
    gets(str);
    fflush(stdin);

    printf("\n%s", str2 = elimina(str));
    free(str2);
}
