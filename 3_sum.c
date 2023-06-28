#include<stdio.h>
int main()
{
    int number1,number2,sum;
    printf("Enter 2 numbers:");
    scanf("%d%d",&number1,&number2);
    
    sum = number1+number2;
    
    printf("Sum of digits:%d",sum);

    return 0;
}