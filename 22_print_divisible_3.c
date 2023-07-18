// WAP To Print The Numbers which Are Divisible By 3...

#include <stdio.h>
int main()
{
    int num;
    printf("Enter number range:\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}