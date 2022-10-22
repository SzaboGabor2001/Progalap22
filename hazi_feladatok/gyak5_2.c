#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float gs[6];
    
    int ok;
    do {
        ok = 1;
        printf("Enter six grades ('x,y,z...'): ");
        if (scanf("%f,%f,%f,%f,%f,%f", &gs[0], &gs[1], &gs[2], &gs[3], &gs[4], &gs[5]) != 6) {
            printf("Invalid input.\n");
            for (int i = 0; i < 6; i++) {
                while ((gs[i] = getchar()) != '\n');
            }
            ok = 0;
        }
    } while (!ok);

    printf("Inputted grades:");
    for (int i = 0; i < 6; i++) {
        printf(" %f", gs[0]);
    }    
    


    return 0;
}
