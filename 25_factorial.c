// WAP To Find Factorial Of A Number...

#include <stdio.h>
int main()
{
    int num, fact = 1;
    printf("Enter Number:\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    printf("Factorial Is:%d", fact);
    return 0;
}