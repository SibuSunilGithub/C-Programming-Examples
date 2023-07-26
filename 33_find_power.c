// WAP To Find Power Of A Number Without Pow Function...

# include <stdio.h>
int main(){
    
int num,bit,pow = 1;
    printf("Enter A Number:\n");
    scanf("%d", &num);
    printf("Enter Power Bit:\n");
    scanf("%d", &bit);
    for (int i = 1; i <= bit; i++)
    {
        pow = pow * num;
    }
    printf("Power Of Number Is:%d",pow);
    return 0;
}
    