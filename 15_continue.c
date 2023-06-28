#include<stdio.h>
int main()
{
    int i,count = 5;
    
    for ( i = 0; i < count; i++)
    {
        printf("Hi");
        if (i == 3)
        {
            continue;
        }
        printf("Hello");
    }
    
    return 0;
}