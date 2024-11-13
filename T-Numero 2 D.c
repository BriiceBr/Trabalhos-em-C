#include <stdio.h>

main() {
    int v1, v2, v3, vn, N, x, arm1, arm2;
    x = 0;
    N = 0;

    printf("Digite os dois valores (1-9), separados por espaço: ");
    scanf("%d %d", &v1, &v2);

    printf("Digite um valor N (1-9), diferente dos valores iniciais: ");
    scanf("%d", &vn);

    printf("Serie gerada: %d, %d", v1, v2);

    arm1 = v1;
    arm2 = v2;

    while (!x) {
        v3 = (v1 + v2) % 10;
        printf(", %d", v3);
        if (v3 == vn) {       // testa se o n pertence a sequencia
            N = 1;
        }
        v1 = v2;        // atualiza os valores
        v2 = v3;
        if (v1 == arm1 && v2 == arm2) {
            x = 1;
        }
    }
    printf("\n");

    if (N) {
        printf("O valor %d aparece na serie gerada.\n", vn);
    }

    else {
        printf("O valor %d não aparece na serie gerada.\n", vn);
    }
}
