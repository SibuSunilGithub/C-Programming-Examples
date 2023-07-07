// WAP To Print Sum Of Natural Numbers Using For Loop...

#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter Number:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum Of Numbers:%d", sum);
    return 0;
}