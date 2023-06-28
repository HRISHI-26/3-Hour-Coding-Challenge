#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter 2 numbers:");
    scanf("%d%d",&num1,&num2);

    if(num1 > num2)
        printf("Number One is greater");
    else
        printf("Number Two is greater"); 
    
    return 0;
}