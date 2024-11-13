#include<stdio.h>

main () {
    int d, m, a, dn = 0;
    printf("Escreva a data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &d, &m, &a);

// janeiro

    if (m == 1) {printf("%d/%d/%d e o dia numero %d", d, m, a, d);}

// meses

    if (m > 1) {
        dn = dn + 31;}
    if (m > 2) {
        dn = dn + 28;}
    if (m > 3){
        dn = dn + 31;}
    if (m > 4){
        dn = dn + 30;}
    if (m > 5){
        dn = dn + 31;}
    if (m > 6){
        dn = dn + 30;}
    if (m > 7){
        dn = dn + 31;}
    if (m > 8){
        dn = dn + 31;}
    if (m > 9){
        dn = dn + 30;}
    if (m > 10){
        dn = dn + 31;}
    if (m > 11){
        dn = dn +30;}

// ano bissexto

    if (a % 4 == 0 && a % 100 > 0) {
        if (a % 100 == 0 && a % 400 == 0); {
            dn++;}
            if (d == 29 && m == 2) { // quando 29/02/aaaa = bissexto
                dn--;}
    }

// dias

    dn = dn + d;

    printf("%d/%d/%d e o dia numero %d", d, m, a, dn);


}
