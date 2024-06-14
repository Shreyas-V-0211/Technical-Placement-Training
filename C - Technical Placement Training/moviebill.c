#include<stdio.h>

void main()
{
    int pizza,puffs,cooldrink;
    printf("Enter the no of pizzas bought: ");
    scanf("%d",&pizza);
    printf("Enter the no of puffs bought: ");
    scanf("%d",&puffs);
    printf("Enter the no of cool drinks bought: ");
    scanf("%d",&cooldrink);
    printf("\nBill Details\n");
    printf("No of pizzas:%d\n",pizza);
    printf("No of puffs:%d\n",puffs);
    printf("No of cooldrinks:%d\n",cooldrink);
    int sum;
    sum=(100*pizza)+(20*puffs)+(10*cooldrink);
    printf("Total price=%d\n",sum);
    printf("ENJOY THE SHOW!!!\n");
}