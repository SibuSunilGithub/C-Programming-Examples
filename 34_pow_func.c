// WAP To Find Power Of A Number With Pow Function...

#include <stdio.h>
#include <math.h>

int main()
{

    double base, power, output;

    printf("Enter A Number:\n");
    scanf("%lf", &base);
    printf("Enter Power Bit:\n");
    scanf("%lf", &power);

    output = pow(base, power);

    printf("Power Of Number Is:%lf", output);

    return 0;
}