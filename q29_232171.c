
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Enter first: ");
    int b = get_int("Enter second: ");

    if (a > b)
        printf("Largest = %d\n", a);
    else if (b > a)
        printf("Largest = %d\n", b);
    else
        printf("Equal\n");
}

