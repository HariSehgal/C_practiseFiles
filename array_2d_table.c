#include<stdio.h>
void ht(int arr[][10],int n ,int m , int x);

int main(){
    int arr[2][10];

    ht(arr,0,10,2);
    printf("Table of 2 : \n");
    for (int i=0;i<10;i++){
        printf("%d\t",arr[0][i]);
    }

    printf("\n");

    ht(arr,1,10,3);
    printf("Table of 3 : \n");
    for (int i=0;i<10;i++){
        printf("%d\t",arr[1][i]);
    }

    return 0;
}

void ht(int arr[][10],int n , int m ,int x){
    for (int i =1 ; i<=m ; i++){
        arr[n][i-1] = i*x;
    }
}