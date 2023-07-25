// WAP To Swap Two Numbers Using C Program...

# include <stdio.h>
int main(){
    int num1 =5, num2 = 10, temp;
    printf("Before Swap:\n num1 = %d and num2 = %d\n",num1,num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After Swap:\n num1 = %d and num2 = %d\n",num1,num2);
    return 0;
}