#include<stdio.h>
int sum(int, int);

int main()
{
    int a, b, result;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a, &b);

    result = sum(a, b);
    printf("Result: %d",result);
}

int sum(int num1, int num2)
{
    int result;
    result = num1 + num2;

    return result;
}