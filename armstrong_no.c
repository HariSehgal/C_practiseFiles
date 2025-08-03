#include <stdio.h>
int main(){
    int num ;
    int sum =0;
    printf("Enter a number");
    scanf("%d",&num);
    int z =num;
    for(int i=1 ; i<=3 ; i++){
        int a = num % 10;
        sum = sum + (a*a*a);
        num = num /10;
    }
    if (z == sum){
        printf("It is a armstrong number");
    }
    else{
        printf("It is not a armstrong number");
    }
    return 0;
}