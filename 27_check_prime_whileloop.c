// WAP to check the number is prime or not...(Using while loops)(v.imp ques.)

#include <stdio.h>

int main()
{
    int i = 2, number, prime = 1;
    printf("Enter the number\n");
    scanf("%d", &number);
    while (i < number)
    {

        if (number % i == 0)
        {
            prime = 0;
            i++;
            break;
        }
    }
    if (prime == 0)
    {
        printf("The number %d is not a prime number\n", number);
    }
    else
    {
        printf("The number %d is a prime number\n", number);
    }
    return 0;
}
