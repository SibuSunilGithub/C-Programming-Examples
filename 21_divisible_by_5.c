// WAP To Find Number Of Integers Divisible by 5...

# include <stdio.h>
int main(){
    int num, count=0;
    printf("Enter number range:\n");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        if (i%5==0)
        {
            count++;
        }
        
    }
    printf("There is %d numbers which are divisible by 5",count);
    return 0;
    
}