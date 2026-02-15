#include <cs50.h>
#include <stdio.h>

int findMax(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main(void)
{
    int x = get_int("Enter first number: ");
    int y = get_int("Enter second number: ");

    int max = findMax(x, y);

    printf("Max = %d\n", max);
}

