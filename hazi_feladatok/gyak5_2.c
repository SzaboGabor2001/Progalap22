#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    const int size = 6;
    int gs[size];
    
    int ok;
    do {
        ok = 1;
        printf("Enter six grades ('x,y,z...'): ");
        if (scanf("%d,%d,%d,%d,%d,%d", &gs[0], &gs[1], &gs[2], &gs[3], &gs[4], &gs[5]) != size) {
            printf("Invalid input.\n");
            for (int i = 0; i < size; i++) {
                while ((gs[i] = getchar()) != '\n');
            }
            ok = 0;
        }
    } while (!ok);

    printf("Inputted grades:");
    for (int i = 0; i < size; i++) {
        printf(" %d", gs[i]);
    }    
    


    return 0;
}
