// Check Two No Equal Or not...

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter 1st no:\n");
    scanf("%d", &num1);
    printf("Enter 2nd no:\n");
    scanf("%d", &num2);

    if (num1 == num2)
    {
        printf("Equal Number.");
    }
    else
    {
        printf("Not Equal Number.");
    }
    return 0;
}