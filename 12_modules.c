#include<stdio.h>
int main()
{
    int i, count;
    printf("Enter a count:");
    scanf("%d",&count);
    for (i = 0; i < count; i++)
    {
        if(i % 2 == 0)
            printf("%d\n",i);
    }
}