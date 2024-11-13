#include<stdio.h>


// Escreva um programa que leia o par de valores iniciais e um valor posivo N, e gere a
//sequência até que a soma de todos os elementos (os dois iniciais e os gerados a seguir)
//seja superior a N.



main () {
    int n, v1, v2, v3, soma;

    printf("Digite um par de numeros intiro positivos: ");
    scanf ("%d %d", &v1, &v2);

    printf ("Digite um numero inteiro positivo: ");
    scanf ("%d", &n);

    soma = v1 + v2;

    while (soma < n) {
        v3 = v2 + v1;
            if (v3 > 9) {
                v3 = v3 % 10;
            }
        soma += v3;
        printf("%d, ", v3);
        v1 = v2;
        v2 = v3;
    }
    printf ("\nA soma e: %d", soma);
}
