#include<stdio.h>
//jeito errado

void func(char *ini) {
    char *fim, aux;
    for (fim = ini; *fim; fim++);   // a var fim chega no \0
    fim--;  // chega na ultima letra \0 - 1 = L

    aux = *ini;
    *ini = *fim;
    *fim = aux;




}

main () {

    char str[20];
    printf("Digite uma string: ");
    gets(str);

    printf("String original: %s\n", str);

    func(str);



    printf("String impostora: %s", str);

 }
