#include<stdio.h>
int main()
{
    int i, count = 5;

    for ( i = 0; i < count; i++)
    {
        printf("Hi\n");
        if (i == 3)
        {
            break;
        }
        printf("Hello\n");
    }

    return 0;
}