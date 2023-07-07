// WAP To Convert Celsius To Fahrenheit Value...
// far = (cel*9/5)+32

# include <stdio.h>
int main(){
    float cel, far;
    printf("Enter the celsius value.\n");
    scanf("%f",&cel);
    far = (cel*9/5)+32;
    printf("The celsius value in Fahrenheit is:%.2f\n",far);
    return 0;
}