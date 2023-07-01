#include<stdio.h>
int sum();

int main()
{
    int result;

    result = sum();
    printf("Result: %d",result);
    return 0;
}

int sum()
{
    int num1, num2;
    int result;

    printf("Enter 2 numbers:");
    scanf("%d%d", &num1, &num2);
    result = num1 + num2;
    return result;
}