#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double a = 0, b = 0;

    printf("Enter two numbers: ");
    scanf("%lf,%lf", &a, &b);

    if (b < a) {
        printf("%lf is larger", a);
    } else if (a < b) {
        printf("%lf is larger", b);
    } else {
        printf("%lf and %lf are equal.", a, b);
    }    
    
    return 0;
}
