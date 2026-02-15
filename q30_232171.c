#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Enter first: ");
    int b = get_int("Enter second: ");
    int c = get_int("Enter third: ");

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    printf("Largest = %d\n", max);
}
