#include<stdio.h>
#include<stdlib.h>
/*Escrever um programa que leia uma string e crie uma nova string na qual as letras s�o
replicadas de acordo com sua posi��o na string lida, ou seja, a primeira letra � copiada uma
vez, a segunda duas vezes, a terceira tr�s vezes, e assim por diante. Se for lida a string �hora�,
por exemplo, a string criada deve ser �hoorrraaaa�. A string resultante deve ser colocada em
�rea de mem�ria alocada para este fim, com o tamanho exato necess�rio. */


main () {
    char str[50], i, j = 0, k;

    printf("Digite uma palavra: ");
    gets(str);
    fflush(stdin);

    int tamanho = 0;

    for(i = 0; str[i] != '\0'; i++) {
        tamanho += i+1;
    }
    printf("tamanho: %d", tamanho);

    char *str2;
    str2 = (char*) malloc((tamanho+1) * sizeof(char));
    printf("\n");

    for(i = 0; str[i] != '\0'; i++) {
        for(k = 0; k < i+1; k++) {
            *(str2+j) = str[i];
            j++;
        }
    }
    *(str2+j) = '\0';
    printf("%s", str2);

    free(str2);
}
