#include <stdio.h>
#include <stdlib.h> // rand(), srand() függvényhíváshoz
#include <time.h> // time() függvényhíváshoz
#define MERET 5

int main() {

    int i, j;
    int lotto[MERET], jelolt;

    srand(time(0));

    for (i = 0; i < MERET; i++) {
        jelolt = rand() % 90 + 1;
        for (j = 0; j < i; j++) {
            if (lotto[j] == jelolt)
                break;
        }
        if (j == i) {
            lotto[i] = jelolt;
            i++;
        }
    }
    
    for (i = 0; i < MERET; i++) {
        printf("%d. number: %d\n", i + 1, lotto[i]);
    }

    return 0;
}