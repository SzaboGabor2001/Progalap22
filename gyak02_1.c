#include <stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    printf("xd\n");

    float a = 10, b = 4, c = 0;    

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
