#include <stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    float a = 10, b = 4, c = 0;

    printf("gib number: %f");
    scanf(" %f", &a);

    c = a / b;
    printf("calc: %f / %f = %.2f\n", a, b, c);
    c = a + b;
    printf("calc: %f + %f = %.2f\n", a, b, c);
    c = a - b;
    printf("calc: %f - %f = %.2f\n", a, b, c);
    c = a * b;
    printf("calc: %f * %f = %.2f\n", a, b, c);

    return 0;
}
