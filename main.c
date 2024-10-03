#include <stdio.h>

int main(void) {
    int g,m,a;
    printf("inserisci giorno mese e anno")
    scanf("%d %d %d", &g, &m, &a);
    if (m == 9 || m == 11 || m == 6 || m == 4) {
        if (g > 30) {
            printf("questa data non esiste");
        } else {
            printf("questa data esiste");
        }
    } if (m == 1 || m == 12 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10) {
        if (g > 30) {
            printf("questa data non esiste");
        } else {
            printf("questa data esiste");
        }
    } if (m == 2) {
        if (g == 28 || g == 29) {
            printf("questa data non esiste");
        } else {
            printf("questa data esiste");
        }
    }
    if (m  < 1 || m > 12) {

            printf("questa data esiste");
        }
    }