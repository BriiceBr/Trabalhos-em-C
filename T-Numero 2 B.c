#include<stdio.h>


// Escreva um programa que leia o par de valores iniciais e um valor posivo N, e gere a
//sequência até que a soma de todos os elementos (os dois iniciais e os gerados a seguir)
//seja superior a N.



main () {
    int arm1, arm2, v1, v2, v3, soma;

    printf("Digite um par de numeros intiro positivos (1 a 9): ");
    scanf ("%d %d", &v1, &v2);

    arm1 = v1;
    arm2 = v2;

    soma = v1 + v2;

    while (1) {             // while verdadeiro portanto entra no laço
        v3 = v2 + v1;
            if (v3 > 9) {
                v3 = v3 % 10;
            }
        soma += v3;
        printf("%d ", v3);
        v1 = v2;
        v2 = v3;
        if ((v1 == arm1 && v2 == arm2) || (v1 == arm2 && v2 == arm1)) {     // quando achar os valores iniciais, ele para
            break;
        }
    }
    printf ("\nA soma e: %d", soma);
}

