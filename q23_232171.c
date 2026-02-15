#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("Enter number: ");

    if (x > 0)
        printf("Positive\n");
    else if (x < 0)
        printf("Negative\n");
    else
        printf("Zero\n");
}
