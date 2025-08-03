#include<stdio.h>
#include<string.h>
struct students{
    char name[20];
    int roll;
    float cgpa;
};
int main(){
    struct students s1,s2,s3;
    //student 1
    strcpy(s1.name,"Hari Sehgal");
    s1.roll = 33;
    s1.cgpa = 9.6;
    // student 2
    strcpy(s2.name,"Anubhav Chaudhary");
    s2.roll = 58;
    s2.cgpa = 8.6;
    //student 3
    strcpy(s3.name,"Ishaan");
    s3.roll = 30;
    s3.cgpa = 8.5;
    printf("Records of student 1 -\n ");
    printf("Name - %s , Roll No. - %d , CGPA - %f\n ",s1.name,s1.roll,s1.cgpa);
    printf("Records of student 2 -\n ");
    printf("Name - %s , Roll No. - %d , CGPA - %f\n ",s2.name,s2.roll,s2.cgpa);
    printf("Records of student 3 -\n ");
    printf("Name - %s , Roll No. - %d , CGPA - %f\n ",s3.name,s3.roll,s3.cgpa);
    return 0;
}