// WAP to calculate the sum of the numbers occuring in the multiplication table...

#include <stdio.h>
int main()
{

    int num, sum = 0;
    printf("Enter A Number:\n");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        sum += (num * i);
    }
    printf("Sum of the numbers occuring in the multiplication table of  %d is\n%d",num, sum);

    return 0;
}