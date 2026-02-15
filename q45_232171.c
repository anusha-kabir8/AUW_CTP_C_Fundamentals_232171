#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int arr[5];

    for (int i = 0; i < 5; i++)
        arr[i] = get_int("Enter number: ");

    printf("Reverse Order: ");

    for (int i = 4; i >= 0; i--)
        printf("%d ", arr[i]);

    printf("\n");
}
