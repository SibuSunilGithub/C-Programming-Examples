//  WAP To Find Simple Interest Of Certain Amount Of Money...

# include <stdio.h>
int main(){
    int principal, rate, year,si;

    printf("Enter Principal Amount:\n");
    scanf("%d",principal);
    printf("Enter rate of interest:\n");
    scanf("%d",rate);
    printf("Enter time in year:\n");
    scanf("%d",year);

si =(principal*year*rate)/100;
printf("Simple Interest Is:%d\n",si);
return 0;
   
}