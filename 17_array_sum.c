#include<stdio.h>
int main()
{
    int i, count, array[count], sum = 0;
    
    printf("Enter no of elements:");
    scanf("%d",&count);

    printf("Enter elements:");
    for ( i = 0; i < count; i++)
    {
        scanf("%d",&array[i]);
    }
    
    for ( i = 0; i < count; i++)
    {
        sum = sum + array[i];
    }

    printf("Sum: %d",sum);
    
    return 0;
}