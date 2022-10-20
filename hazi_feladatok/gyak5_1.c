#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int size = 10;
    double array[size];

    srand(time(0));

    int upper = 320, lower = 270;
    double range = upper - lower;
    double div = RAND_MAX / range;
    double value;

    for (int i = 0; i < size; i++) {        
        value = lower + (rand() / div);
        array[i] = round(value * 100) / 100;
    }

    printf("Relative values after '%.2lf': ", array[0]);

    for (int i = 1; i < size; i++) {
        printf("%.1lf ", array[i] - array[0]);
    }
    
    printf("\n");

    if (array[1] < 0) {        
        printf("Values aren't monotone.");
        return 0;
    } else {
        for (int i = 2; i < size; i++) {
            if (array[i] < array[i - 1]) {
                printf("Values aren't monotone.");
                return 0;  
            }
        }
        printf("Values are monotone.");
    }

    return 0;
}
