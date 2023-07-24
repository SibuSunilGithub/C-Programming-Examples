// To generate a random number we use the programme...

#include <stdio.h>
#include<stdlib.h>// library for random no generator.
#include<time.h>  // library for time.


int main(){
    int number;
    srand(time(0));
    number=rand()%100+1;//It generate a random number between 1 & 100.
    printf("The number is %d",number);
    
     return 0;
}