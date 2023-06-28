#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if(num > 0)
    {
        printf("Its a positive number.");
    }
    else
    {
        printf("Its a negative number.");
    }

    return 0;
}