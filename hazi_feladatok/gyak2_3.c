#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a = 0, b = 0;

    printf("Enter two whole numbers to be divided ('a,b'): ");
    scanf("%d,%d", &a, &b);

    printf("%d / %d = %d, %lf remains", a, b, a/b, fmod(a, b));

    double c = 0, d = 0;

    printf("\nEnter two real numbers to be divided ('c,d'): ");
    scanf("%lf,%lf", &c, &d);

    printf("%lf / %lf = %lf, %lf remains", c, d, floor(c/d), fmod(c, d));

    return 0;
}
