// C program to add numbers...(int,float...)
# include <stdio.h>
 int main(){
    float num1, num2 ,total; 

    printf("Enter two floating number:\n");
    scanf("%f %f",&num1,&num2);

    // printf("Enter second number: ");
    // scanf("%d",&num2); ---> comment line...

    total=num1+num2;
    printf("Sum of two no is: %f",total);

    return 0;
 }
