#include<stdio.h>
int main()
{
    int num1,num2,choice,result;
    printf("Enter 2 numbers:");
    scanf("%d %d",&num1,&num2);
    
    printf("1.Addtion\n2.Substraction\n3.Multiplication\n4.Division\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    if (choice == 1)
    {
        result = num1 + num2;
        printf("Result: %d",result);
    }
    else if (choice == 2)
    {
        result =  num1 - num2;
        printf("Result: %d",result);
    }
    else if (choice == 3)
    {
        result = num1 * num2;
        printf("Result: %d",result);
    }
    else if (choice == 4)
    {
        result = num1 / num2;
        printf("Result: %d",result);
    }
    else
    {
        printf("No such choice!!!");
    }
    
    return 0;
}