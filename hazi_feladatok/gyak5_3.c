#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{

    do {
        srand(time(0));
        int number = rand() % 100 + 1;
        int guess;

        printf("Guess between 1-100.");
        int ok;
        char c;
        do {
            ok = 1;
            if (scanf("%d", &guess) != 1) {
                printf("Invalid input.");
                while ((c = getchar()) != '\n');
                ok = 0;
            } else if (guess < 1 || guess > 100) {
                printf("Guess outside range.");
                while ((c = getchar()) != '\n');
                ok = 0;
            }
        } while (!ok);


    } while (1 == 1);









    return 0;
}
