// WAP to check the number is prime or not...(Using for loops)(v.imp ques.)

#include <stdio.h>

int main()
{
    int number, prime = 1;
    printf("Enter the number\n");
    scanf("%d", &number);
    for (int i = 2; i*i < number; i++)  // check by root n method  
    {
        if (number % i == 0)
        {
            prime = 0;
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