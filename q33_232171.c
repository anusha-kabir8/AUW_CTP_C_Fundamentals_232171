#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float t = get_float("Enter temperature: ");

    if (t < 20)
        printf("Cold\n");
    else if (t <= 30)
        printf("Warm\n");
    else
        printf("Hot\n");
}
