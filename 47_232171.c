#include <cs50.h>
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int x = get_int("Enter first number: ");
    int y = get_int("Enter second number: ");

    int result = add(x, y);

    printf("Sum = %d\n", result);
}
