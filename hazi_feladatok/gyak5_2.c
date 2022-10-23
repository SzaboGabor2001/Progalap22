#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    const int size = 6;
    int gs[size];
    
    printf("Enter six grades ('x,y,z...'): ");
    scanf("%d,%d,%d,%d,%d,%d", &gs[0], &gs[1], &gs[2], &gs[3], &gs[4], &gs[5]);

    printf("Inputted grades:");
    for (int i = 0; i < size; i++) {
        printf(" %d", gs[i]);
    }    
    
    float avg = 0.0;
    int total = 0;

    for (int i = 0; i < size; i++) {
        total += gs[i];
    }
    avg = (float)total / (float)size;
    
    printf("\nAverage of grades: %f", avg);

    int grant = -1;

    if (avg >= 1 && avg < 3.5) {
        grant = 0;
    } else if (avg >= 3.5 && avg < 4.0) {
        grant = 5000;
    } else if (avg >= 4.0 && avg < 4.5) {
        grant = 10000;
    } else if (avg >= 4.5 && avg <= 5.0) {
        grant = 15000;
    } else if (avg < 1.0) {
        printf("\nAverage can't be lower than 1.");
    } else if (avg > 5.0) {
        printf("\nAverage can't be higher than 5.");
    } else {
        printf("\nInvalid.");
    }

    if (grant != -1) {
        printf("\nGrant is equal to %d.", grant);
    }

    return 0;
}
