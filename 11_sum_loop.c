#include<stdio.h>
int main()
{
    int i, sum=0, count;

    printf("Enter count: ");
    scanf("%d",&count);
    for ( i = 0; i < count; i++)
    {
        sum=sum + i;
    }
    
    printf("Sum : %d",sum);

    return 0;
}