#include<stdio.h>
#include<stdlib.h>
void main()
{
    int choice,number;
    while(choice!=0)
    {
        printf("THE MOVIES ON SHOW ARE:\n");
        printf("1. TRANSFORMERS: AGE OF ULTRON\n");
        printf("2. MATRIX\n");
        printf("3. AVENGERS\n");
        printf("Enter 0 to EXIT\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        printf("Enter number of people: ");
        scanf("%d",&number);
        switch(choice)
        {
            case 1:
            printf("PRICE FOR MOVIE: RS. 250\n");
            break;
            case 2:
            printf("PRICE FOR MOVIE: RS.300\n");
            break;
            case 3:
            printf("PRICE FOR MOVIE: RS. 230\n");
            break;
            case 0:
            exit(0);
            default:
            printf("INVALID CHOICE!!!\nENTER A VALID CHOICE");
        }
    }
}