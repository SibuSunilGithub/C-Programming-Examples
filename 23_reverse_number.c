// WAP To Reverse A Number...

# include <stdio.h>
int main(){
    int num, digit, rev=0;
    printf("Enter Number:\n");
    scanf("%d",&num);
    while (num!=0)
    {
        digit = num%10;
        num = num/10;
        rev = (rev * 10) + digit; 
    }
    printf("Reverse Of Number Is:%d",rev);
    return 0;
}