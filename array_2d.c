#include<stdio.h>
int main(){
    int ht[2][3];
    for (int i =0 ; i<2 ; i++ ){
        for (int j =0 ; j<3 ; j++){
            printf("enter marks : ");
            scanf("%d",&ht[i][j]);
        } 
    }
    printf("Marks of 1st student : \n");
    for (int i=0; i<3 ; i++){
        printf("%d\n",ht[0][i]);
    }
    printf("Marks of 2nd student : \n");
    for (int i=0 ; i<3 ; i++){
        printf("%d\n",ht[1][i]);
    }
    return 0;
}