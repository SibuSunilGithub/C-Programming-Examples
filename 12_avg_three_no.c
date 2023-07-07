// WAP To Find Average Of Three Numbers...

#include <stdio.h>
int main()
{
    int n1, n2, n3, total, avg;

    printf("Enter Number 1:\n");
    scanf("%d", &n1);
    printf("Enter Number 2:\n");
    scanf("%d", &n2);
    printf("Enter Number 3:\n");
    scanf("%d", &n3);
    total = (n1 + n2 + n3);
    printf("Total:%d\n", total);
    avg = total / 3;
    printf("Average Of Three Number Is:%d", avg);
}