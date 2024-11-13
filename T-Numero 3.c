#include <stdio.h>

int main() {
    float nota, s1n1, s1n2, s2n1, s2n2, pontuacao1, pontuacao2, pontuacaof1, pontuacaof2;
    int surfista;

    s1n1 = 0;
    s1n2 =0;

    s2n1 = 0;
    s2n2 = 0;

    while (1) {             // while usado para escolha do surfista e a nota
        printf("A proxima nota deve ser atribuida a qual surfista: ");
        scanf("%d", &surfista);

        printf("Digite a nota: ");
        scanf("%f", &nota);

        if (nota >= 0.00 && nota <= 10.00) {
            if (surfista == 1) {
                if (nota > s1n1) {
                    s1n2 = s1n1;
                    s1n1 = nota;
                }
                else if (nota > s1n2) {
                    s1n2 = nota;
                }
            }
            else if (surfista == 2) {
                if (nota > s2n1) {
                    s2n2 = s2n1;
                    s2n1 = nota;
                }
                else if (nota > s2n2) {
                    s2n2 = nota;
                }
            }

    // como a nota menor é descartada é só somar as 2 notas maires

    pontuacao1 = s1n1 + s1n2;
    pontuacao2 = s2n1 + s2n2;

    // aqui usado para ver as pontuacoes

            if (pontuacao1 > pontuacao2) {
                printf("Primeiro lugar Surfista 1 - Nota: %.2f (%.2f, %.2f)\n", pontuacao1, s1n1, s1n2);
                printf("Segundo lugar surfista 2 - Nota: %.2f (%.2f, %.2f) - precisa de %.2f\n", pontuacao2, s2n1, s2n2, pontuacao1 - pontuacao2 + 0.01);
            }
            else
                if (pontuacao2 > pontuacao1) {
                printf("Primeiro lugar Surfista 2 - Nota: %.2f (%.2f, %.2f)\n", pontuacao2, s2n1, s2n2);
                printf("Segundo lugar Surfista 1 - Nota: %.2f (%.2f, %.2f) - precisa de %.2f\n", pontuacao1, s1n1, s1n2, pontuacao2 - pontuacao1 + 0.01);
            }
            else {
                printf("Empate Surfista 1 - Nota: %.2f (%.2f, %.2f) e Surfista 2 - Nota: %.2f (%.2f, %.2f)\n", pontuacao1, s1n1, s1n2, pontuacao2, s2n1, s2n2);
                printf("Os dois surfistas precisam de 0.01 para passar o outro\n");
            }
        }           // chaves da condicao das notas maiores q 0 e menores q 10
        else {
            printf("Nota invalida! Insira uma nota entre 0 e 10\n");
        }

    if (surfista == 0) {
        break; }

    }

    pontuacaof1 = s1n1 + s1n2;
    pontuacaof2 = s2n1 + s2n2;

    printf("Pontuação do Surfista 1: %.2f\n", pontuacaof1);
    printf("Pontuação do Surfista 2: %.2f\n", pontuacaof2);

    if (pontuacaof1 > pontuacaof2) {
        printf("Medalha de Oura vai para o surfista 1 - %.2f x %.2f\n", pontuacaof1, pontuacaof2);
    }
    else
        if (pontuacaof2 > pontuacaof1) {
        printf("Medalha de Ouro vai para o surfista 2 - %.2f x %.2f\n", pontuacaof2, pontuacaof1);
    }
    else {
        printf("Deu empate!\n");
    }

}
