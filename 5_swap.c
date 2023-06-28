#include<stdio.h>

int main()
{
    int number1=10;
    int number2=20;
    int temp;
    
    printf("A= %d, B=%d",number1,number2);
    
    temp= number1;
    number1=number2;
    number2= temp;
    
    printf("\nA= %d, B= %d",number1,number2);

    return 0;
}