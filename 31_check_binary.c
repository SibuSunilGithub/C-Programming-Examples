// WAP To Check The Number Is Binary Number Or Not...

#include <stdio.h>

int main()
{
    int num, ok, temp;
    printf("Enter the number-\n");
    scanf("%d", &num);
    while (num != 0)
    {
        temp = num % 10;
        if (temp == 1 || temp == 0)
        {
            ok = 1;
        }
        else
        {
            ok = 0;
        }
        num = num / 10;
    }
    if (ok == 1)
    {
        printf("The number is binary number\n");
    }
    else
    {
        printf("The number is not binary number\n");
    }

    return 0;
}