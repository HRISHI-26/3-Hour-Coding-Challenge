#include<stdio.h>
int main()
{
    int i, count=5, array[count];
    
    printf("Enter array elements:\n");

    for ( i = 0; i < count; i++)
    {
        scanf("%d",&array[i]);
    }
    
    for ( i = 0; i < count; i++)
    {
        printf("%d\t",array[i]);
    }
    
    return 0;
}