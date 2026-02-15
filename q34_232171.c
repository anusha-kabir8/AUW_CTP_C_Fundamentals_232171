#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int age = get_int("Enter age: ");
    int citizen = get_int("Citizen? (1/0): ");

    if (age >= 18)
    {
        if (citizen == 1)
            printf("Eligible to Vote\n");
        else
            printf("Not Eligible (Not Citizen)\n");
    }
    else
        printf("Not Eligible (Under Age)\n");
}
