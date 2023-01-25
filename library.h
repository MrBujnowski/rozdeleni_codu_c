#include <stdio.h>

float zadaniPolomeru(){
    float r;
    int countOfChar;
    do {
        countOfChar = 0;
        printf("Zadej polomer v cm:");
        scanf("%f", &r);
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("Nezadal jsi realne cislo. Zadej znovu\n");
        } else if (r <= 0) {
            printf("Zadej kladne cislo!\n");
        }
    } while (r <= 0 || countOfChar != 0);
    return r;
}