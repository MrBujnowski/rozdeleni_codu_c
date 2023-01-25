#include <stdio.h>
#include <math.h>
#include "library.h"


int main() {
    int uzivatel;
    int countOfChar;
    float polomer;
    do {
        printf("\nMenu\n");
        printf("1 - obvod kruhu\n");
        printf("2 - obsah kruhu\n");
        printf("3 - objem koule\n");
        printf("4 - povrch koule\n");
        printf("5 - konec programu\n");
        printf("Zadej volbu:");
        scanf("%d", &uzivatel);
        while (getchar() != '\n') {
            countOfChar++;
        }
        switch (uzivatel) {
            case 1:
                polomer = zadaniPolomeru();
                printf("\nObvod kruhu o polomeru %.2f cm je %.2f cm.\n\n\n", polomer, 2 * 3.14 * polomer);
                break;
            case 2:
                polomer = zadaniPolomeru();
                printf("Obsah kruhu.\n");
                printf("\nObsah kruhu o polomeru %.2f cm je %.2f. cm2\n\n\n", polomer, 3.14 * polomer * polomer);
                break;
            case 3:
                polomer = zadaniPolomeru();
                printf("Objem koule.\n");
               // printf("\nObjem koule o polomeru %.2f cm je %.2f. cm3\n\n\n", polomer,
                     //  4.0 / 3 * 3.14 * pow(polomer, 3));
                break;
            case 4:
                polomer = zadaniPolomeru();
                printf("Povrch koule.\n");
                //printf("\nPovrch koule o polomeru %.2f cm je %.2f. cm2\n\n\n", polomer, 4 * 3.14 * pow(polomer, 2));
                break;
            case 5:
                printf("Program bude ukoncen!\n");
                break;
            default:
                printf("\nChybna volba.\n");
        }
    } while (uzivatel != 5);
    return 0;
}
