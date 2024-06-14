#include<stdio.h>

int N = 7;
int A[8] = {7,3,2,4,9,12,56};
int M = 3;


int sort(){
    int temp;
    for(int i=0;i<N;i++){
        for(int j=0;j<N-i-1;j++){
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int getmaxandmin(int arr[]){
    int max = arr[0];
    int min = arr[0];
    for (int i=0;i<M;i++){
        printf("\nArr: %d\n",arr[i]);
    }
    for(int i=0;i<M;i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return max - min;
}

int findMinDiff(){
    sort();
    printf("\nSorted array: ");
    int B[M];
    for(int i=0;i<N;i++){
        printf("%d ",A[i]);
    }
    int c =0;
    for (int i=0;i<N && c<M;i++){
        if (A[i] != 1){
            printf("%d\n\n",A[i]);
            B[c] = A[i];
            printf("B: %d, %d",B[c], c);
            c++;
        }
    }
    
    int max = getmaxandmin(B);
    printf("Result: %d",max);
}

int main(){
    findMinDiff();
    return 0;
}