#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int arr[5];

    for (int i = 0; i < 5; i++)
        arr[i] = get_int("Enter number: ");

    printf("You Entered: ");

    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    printf("\n");
}


