#include<stdio.h>

int main()
{
    float number1,number2,number3,average;
    printf("Enter 3 numbers:");
    scanf("%f%f%f",&number1,&number2,&number3);
    average = (number1+number2+number3)/ 3;
    printf("Average is: %f",average);
    
    return 0;
}