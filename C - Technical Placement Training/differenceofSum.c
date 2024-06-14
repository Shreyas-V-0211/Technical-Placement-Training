#include<stdio.h>
int differenceofSum(int n,int m);

int differenceofSum(int n,int m)
{
    int i,divisible=0,non_divisible=0;
    for(i=1;i<=m;i++)
    {
        if(i%n!=0)
        {
            non_divisible=non_divisible+i;
        }
        else
        {
            divisible=divisible+i;
        }
    }
    return non_divisible-divisible;
}

void main()
{
    int n,m;
    printf("n:");
    scanf("%d",&n);
    printf("m:");
    scanf("%d",&m);
    printf("%d",differenceofSum(n,m));
}