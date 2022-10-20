#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0, b = 0, c = 0;

    printf("Please enter the side lengths of a rectangle ('a,b,c'): ");
    scanf_s("%d,%d,%d", &a, &b, &c);

    int surface = 2 * (a * b + a * c + b * c);
    printf("Surface of rectangle: %d\n", surface);

    int volume = a * b * c;
    printf("Volume of rectangle: %d", volume);

    return 0;
}
