// WAP To Print Sum Of Natural Numbers Using While Loop...

#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;
    printf("Enter Number Range:\n");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("Sum Of Numbers: %d", sum);
    return 0;
}