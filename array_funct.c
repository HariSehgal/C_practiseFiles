#include<stdio.h>
int count(int arr[], int n);

int main(){
    int arr[]= {1,2,3,4,5,6};
    int n = 6;
    int z = count(arr,n);
    printf("number of odd : %d",z);
    return 0;
}


int count(int arr[] ,int n){
    int c=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]%2!=0){
                c+=1;
        }
    }
    return c;
}