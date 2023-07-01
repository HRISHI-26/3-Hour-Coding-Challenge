#include<stdio.h>
int main()
{
    int choice, accountBalance = 1000, stop = 0, j;
    int deposit, withdraw, mini[10],i = 0, count = 0;

    for(;;)
    {
        printf("\n1 for Deposit\n2 for Withdraw\n3 for Balance Enquiry\n4 for Mini Statement\nPlease select your option:\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("Enter amount to Deposit:");
                scanf("\n%d",&deposit);
                accountBalance += deposit;
                mini[i] = deposit;
                count = i;
                i++;
                break;
            case 2:
                printf("Enter money to withdraw:");
                scanf("\n%d",&withdraw);
                accountBalance -= withdraw;
                mini[i] = (withdraw*-1);
                count = i;
                i++;
                break;
            case 3:
                printf("Account Balance: %d",accountBalance);
                break;
            case 4:
                if(i != 0)
                {
                    for(j = 0; j <= count; j++)
                        printf("%d\t",mini[j]);
                }
                printf("\n");
            default:
                printf("Thank you visit again\n");
                stop = 1;
                break;
        }
        if (stop == 1)
        {
            break;
        }
        printf("\nDo you want to continue:\n0.Yes\n1.No\n");
        scanf("%d",&stop);
        if (stop == 1 && i != 0)
        {
            printf("Transaction Completed");
            break;
        }
    }
    return 0;
}