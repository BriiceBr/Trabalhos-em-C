#include<stdio.h>


int divisor ( int a, int b) {
    if (!(a % b) || !(b % a))
            return 1;
        else
            return 0;


    ou


    return(!(a % b) || !(b % a))
}

main () {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if ( divisor(a, b) )
        printf("SIM, um dos valores divide o outro!");
    else
        printf("NAO, um dos valores NAO divide o outro!");

}
