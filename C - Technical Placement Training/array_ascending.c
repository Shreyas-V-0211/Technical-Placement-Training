#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,j,n,temp,num;
    printf("N: ");
    scanf("%d",&n);
    int arr[n];
    printf("arr[] = ");
    for(i=0;i<n;i++){
        scanf("%d",&num);
        if(num==0||num==1||num==2){
            arr[i]=num;
        }
        else{
            printf("Enter only 0 or 1 or 2");
            exit(0);
        }
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<n-i-1;j++){
            if(arr[j]>=arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}