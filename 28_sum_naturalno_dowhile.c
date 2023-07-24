// WAP to find sum of natural numbers using (do---while) loop...

#include <stdio.h>

int main()
{

    int num, sum = 0, i = 1;
    printf("Enter A Number:\n");
    scanf("%d", &num);

    do
    {
        sum += i;
        i++;
    }

    while (i <= num);

    printf("Sum of first ten natural number is\n%d", sum);
    return 0;
}