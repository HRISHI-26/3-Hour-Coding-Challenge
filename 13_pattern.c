#include<stdio.h>
int main()
{
    int i, count = 10, j;
    for ( i = 0; i < count; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}