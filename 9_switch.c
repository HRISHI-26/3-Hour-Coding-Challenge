#include<stdio.h>
int main()
{
    int choice;

    printf("\t\"Course Selection\"\n");
    printf("1 for Computer Science\n 2 for Electronics\n 3 for Mechanical\n 4 for Civil\n Enter your choice:");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("You have applied for Computer Secience Engineering");
        break;
    case 2:
        printf("You have applied for Electronics Engineering");
        break;
    case 3:
        printf("You have applied for Mechanical Engineering");
    case 4:
        printf("You have applied for Civil Engineering");
    default:
        printf("No such course !!!");
        break;
    }

    return 0;
} 