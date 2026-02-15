#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("Enter number: ");

    if (x >= 1 && x <= 100)
        printf("In Range\n");
    else
        printf("Out of Range\n");
}
