// WAP to check even or odd...

# include <stdio.h>
int main(){
    int num;
    printf("Enter an integer number:");
    scanf("%d",&num);
    if(num%2==0){
        printf("%d is even.", num);
    }
    else{
        printf("%d is odd.", num);
    }
    return 0;
}