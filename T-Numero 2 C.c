#include<stdio.h>

/*c) Escreva um programa que encontre o n�mero de elementos das s�ries que tem mais
e menos elementos at� a primeira repeti��o do par inicial. A s�rie acima, por exemplo,
tem 14 elementos at� a primeira repeti��o do par inicial (4 e 7, nessa ordem). */


main () {
    int arm1, arm2, v1, v2, v3, nE1, emenor, emaior, series, contador = 0;

    emenor = 1000;
    emaior = 0;

    printf("Digite quantas series devem ser feitas: ");
    scanf("%d", &series);

    while (contador != series) {
        printf("\nDigite um par de numeros intiro positivos (1 a 9): ");
        scanf ("%d %d", &v1, &v2);

        arm1 = v1;
        arm2 = v2;
        nE1 = 2;

            while (1) {             // while verdadeiro portanto entra no la�o
                v3 = v2 + v1;
                    if (v3 > 9) {
                        v3 = v3 % 10;
                    }
                printf("%d ", v3);
                v1 = v2;
                v2 = v3;
                nE1++;
                if (v1 == arm1 && v2 == arm2) {     // quando achar os valores iniciais, ele para
                    contador++;
                    printf ("\nO numero de elementos da serie e: %d", nE1);
                    break;
                }       // if
            }       //while 2

        if (nE1 > emaior) {
            emaior = nE1;
        }
        if (nE1 < emenor) {
            emenor = nE1;
        }
    }       //main while

    printf("\nO maior n�mero de elementos �: %d\nE o menor �: %d\n", emaior, emenor);
}
