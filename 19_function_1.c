#include<stdio.h>
void sum();

int main()
{
    sum();
    return 0;
}

void sum()
{
    int num1, num2;
    int result;
    
    printf("Enter 2 numbers:");
    scanf("%d%d",&num1, &num2);

    result = num1 + num2;
    printf("Result: %d",result);
}