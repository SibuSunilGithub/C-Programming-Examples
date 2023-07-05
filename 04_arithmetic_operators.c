// C program to perform arithmetic operations...

#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);

    printf("Addition is:%d\n", num1 + num2);
    printf("Substraction is:%d\n", num1 - num2);
    printf("Multiplication is:%d\n", num1 * num2);
    printf("Division is:%d\n", num1 / num2);
    printf("Modulus is:%d\n", num1 % num2);
}