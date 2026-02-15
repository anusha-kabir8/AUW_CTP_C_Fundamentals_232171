#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int arr[5];

    for (int i = 0; i < 5; i++)
        arr[i] = get_int("Enter number: ");

    int largest = arr[0];

    for (int i = 1; i < 5; i++)
        if (arr[i] > largest)
            largest = arr[i];

    printf("Largest = %d\n", largest);
}
