// WAP  to print multiplication table of a given number...

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d", &n);
    printf("***Multiplication table of %d is***\n\n", n);
    for (int i = 1; i <= 10; i++)
    {

        printf("%d X %d = %d\n", n, i, n * i);
    }
    return 0;
}