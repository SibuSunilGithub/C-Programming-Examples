// WAP To Find The Average And Percerntage Of A Student...
// ( 6 Subject & 100 marks )

#include <stdio.h>
int main()
{
    float Math, English, Physics, Chemistry, Mil, IT, total, avg, percentage;

    printf("Enter Math Mark:\n");
    scanf("%f", &Math);
    printf("Enter English Mark:\n");
    scanf("%f", &English);
    printf("Enter Physics Mark:\n");
    scanf("%f", &Physics);
    printf("Enter Chemistry Mark:\n");
    scanf("%f", &Chemistry);
    printf("Enter Mil Mark:\n");
    scanf("%f", &Mil);
    printf("Enter IT Mark:\n");
    scanf("%f", &IT);

    total = (Math + English + Physics + Chemistry + Mil + IT);
    printf("Total Mark Is:%.2f\n", total);
    avg = total / 6;
    printf("Average Mark Is:%.2f\n", avg);
    percentage = (total / 600) * 100;
    printf("Percentage Is:%.2f", percentage);
}