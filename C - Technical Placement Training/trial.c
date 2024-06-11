#include<stdio.h>
void main()
{
    int i;
    char trial[10];
    printf("Enter:\n");
    for(i=0;i<10;i++)
    {
        printf("%d-->",i);
        scanf("%s",&trial[i]);
    }
    printf("%s",trial);
}