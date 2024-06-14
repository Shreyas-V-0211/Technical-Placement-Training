#include<stdio.h>
int n=5,k=3;
void main()
{
    int arr[]={1,2,3,4,5};
    int i,j;
    int first_half=k;
    int second_half=n-k;
    int half2[3];
    for(i=0;i<3;i++)
    {
        k--;
        half2[i]=arr[k];
    }
    int half1[2];
    for(i=0;i<2;i++)
    {
        half1[i]=arr[n-1];
        n--;
    }
    printf("\nFirst Half: ");
    for(i=0;i<2;i++)
    {
        printf("%d",half1[i]);
    }
    printf("\nSecond Half: ");
    for(i=0;i<3;i++)
    {
        printf("%d",half2[i]);
    }
    printf("\nEXPECTED ARRAY:");
    for(i=0;i<3;i++)
    {
        printf("%d\t",half2[i]);
    } 
    for(i=0;i<2;i++)
    {
        printf("%d\t",half1[i]);
    }    
}