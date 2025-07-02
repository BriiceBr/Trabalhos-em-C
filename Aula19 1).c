#include<stdio.h>
#include<stdlib.h>
/* Escreva um programa que leia uma string e dois valores numéricos a e b, chame uma
função que copie para uma segunda string as letras colocadas entre os índices a e b (inclusive)
na primeira string. A segunda string deve ser criada de forma dinâmica e ter o tamanho exato
para conter a string com os caracteres que receberá. Se um ou os dois índices forem
inadequados para a string lida (muito grandes, por exemplo), esta deve ser copiada inteira. */



char* func(int a, int b, char *s) { // char* é para retornar o endereço do começo da string ou seja,
    int i, tam = 0, tam2 = 0;               // devolver o começo da string copiada para a str2 la na main
    char *s2;

    for(i = 0; s[i] != '\0'; i++) {
        tam++;
    }
    printf("Tamanho da palavra: %d", tam);

    if (a >= 0 && b >= 0 && a < tam && b < tam) {
        if (a < b) {
            for (i = a; i < b+1;i++) {
                tam2++;
            }
            s2 = (char*) malloc((tam2 + 1) * sizeof(char)); // +1 '\0'
            int j;
            for(i = a, j = 0; i < b+1; i++, j++) {
                s2[j] = s[i];
            }
            s2[j] = '\0';
        }
        if (b < a) {
            for (i = b; i < a+1;i++) {
                tam2++;
            }
            s2 = (char*) malloc((tam2 + 1) * sizeof(char)); // +1 '\0'
            int j;
            for(i = b, j = 0; i < a+1; i++, j++) {
                s2[j] = s[i];
            }
            s2[j] = '\0';
        }
        if (b == a) {
            s2 = (char*) malloc(2 * sizeof(char)); // letra + '\0'
            s2[0] = s[a];
            s2[1] = '\0';
        }
    }
    else {
        s2 = (char*) malloc((tam+1) * sizeof(char)); // letra + '\0'
        for(i = 0; i < tam+1; i++){
            s2[i] = s[i];
        }
        s2[i] = '\0';
    }



    return s2;
}

main () {
    char str[100], *str2;
    int a, b;

    printf("Digite a str: ");
    gets(str);
    fflush(stdin);
    printf("Digite o valor A e dps B: ");
    scanf("%d", &a);
    scanf("%d", &b);

    str2 = func(a, b, str);

    printf("\nSua string fica assim: %s", str2);
    free(str2);
}
