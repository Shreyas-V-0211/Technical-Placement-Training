#include<stdio.h>
#include<stdlib.h>
void calculate(int r,int unit,int arr[],int n);

void main()
{
    int r,unit,n;
    printf("r: ");
    scanf("%d",&r);
    printf("unit: ");
    scanf("%d",&unit);
    printf("n: ");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("arr: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    calculate(r,unit,arr,n);
}

void calculate(int r,int unit,int arr[],int n)
{
    int required_food = r*unit;
    int sum=0,i,done;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum>=required_food)
        {
            done=i+1;
            printf("%d",done);
            exit(0);
        }
    }
    if(arr[0]==' ')
    {
        printf("-1");
    }
    else if(sum!=required_food)
    {
        printf("0");
    }
}