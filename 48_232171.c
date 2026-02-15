#include <cs50.h>
#include <stdio.h>

void checkEvenOdd(int number)
{
    if (number % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

int main(void)
{
    int n = get_int("Enter number: ");
    checkEvenOdd(n);
}

