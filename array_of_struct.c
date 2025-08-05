#include<stdio.h>
#include<string.h>
struct college{
    char name[25];
    int roll;
    float cgpa;
};
int main(){
    struct college CSE[5] , ECE[5] , IT[5];
    //CSE STUDENT
    strcpy(CSE[0].name,"Hari Sehgal");
    CSE[0].roll = 33;
    CSE[0].cgpa = 9.6;
    strcpy(CSE[1].name,"Anubhav Chaudhary");
    CSE[1].roll = 58;
    CSE[1].cgpa = 8.6;
    //ECE STUDENT 
    strcpy(ECE[0].name,"Tisha Madaan");
    ECE[0].roll = 47;
    ECE[0].cgpa = 9.9;
    strcpy(ECE[1].name,"AMAN");
    ECE[1].roll = 16;
    ECE[1].cgpa = 7.8;
    //IT STUDENT
    strcpy(IT[0].name,"Vansh Sehgal");
    IT[0].roll = 25;
    IT[0].cgpa = 10.0;
    strcpy(IT[1].name,"Prince Chaudhary");
    IT[1].roll = 20;
    IT[1].cgpa = 6.6;
    printf("RECORDS OF STUDENTS OF CSE \n ");
    printf("Name - %s , Roll no - %d  , CGPA - %f\n ",CSE[0].name,CSE[0].roll,CSE[0].cgpa);
    printf("Name - %s , Roll no - %d  , CGPA - %f\n ",CSE[1].name,CSE[1].roll,CSE[1].cgpa);
    printf("RECORDS OF STUDENTS OF ECE \n ");
    printf("Name - %s , Roll no - %d  , CGPA - %f\n ",ECE[0].name,ECE[0].roll,ECE[0].cgpa);
    printf("Name - %s , Roll no - %d  , CGPA - %f\n ",ECE[1].name,ECE[1].roll,ECE[1].cgpa);
    printf("RECORDS OF STUDENTS OF IT \n ");
    printf("Name - %s , Roll no - %d  , CGPA - %f\n ",IT[0].name,IT[0].roll,IT[0].cgpa);
    printf("Name - %s , Roll no - %d  , CGPA - %f\n ",IT[1].name,IT[1].roll,IT[1].cgpa);
    return 0;
}