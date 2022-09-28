#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double a;
    
    printf("Enter any real (double) number: ");
    scanf("%lf", &a);

    int c = ceil(a);
    int f = floor(a);

    printf("Ceiling of %lf: %d | Floor of %lf: %d", a, c, a, f);

    return 0;
}