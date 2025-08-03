// Area of circle
#include<stdio.h>

int main(){
    int radius;
    printf("Enter radius of circle");
    scanf("%d",&radius);
    float pi = 3.14;
    float area = pi * radius *radius;
    printf("area of circle %f", area);
    return 0;
}