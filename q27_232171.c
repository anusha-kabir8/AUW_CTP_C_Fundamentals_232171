#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("Enter number: ");

    if (x == 0)
        printf("Zero\n");
    else if (x % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}
