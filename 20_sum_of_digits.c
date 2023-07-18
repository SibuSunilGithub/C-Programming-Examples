// WAP To Find Sum Of Digits Of A Number...

#include <stdio.h>
int main()
{
    int num, digit, sum = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    while (num != 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    printf("Sum of digits is:%d", sum);

    return 0;
}