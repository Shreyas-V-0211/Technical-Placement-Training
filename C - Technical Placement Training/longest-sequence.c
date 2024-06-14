#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,j,num,temp,count=0,present;
    printf("n: ");
    scanf("%d",&n);
    int A[n];
    int new[n];
    if(n>=1 && n<=2500)
    {
        printf("A = ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&num);
            if(num>=1 && num<=2000){
                A[i]=num;
            }
            else{
                printf("Invalid Input!!");
                exit(0);
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n-1;j++){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
        for(i=0;i<n;i++)
        {
            printf("%d",A[i]);
        }
    }
    else
    {
        printf("Invalid Input!!");
        exit(0);
    }
    printf("%d",count);
}