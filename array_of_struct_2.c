#include<Stdio.h>
struct address{
    int houseNo;
    int block;
    char city[20];
    char state[20];
};
void printinfo(struct address persons);
int main(){
    struct address persons[5];
    printf("Enter record of 1st person");
    scanf("%d",&persons[0].houseNo);
    scanf("%d",&persons[0].block);
    scanf("%s",persons[0].city);
    scanf("%s",persons[0].state);
    printf("Enter record of 2nd person");
    scanf("%d",&persons[1].houseNo);
    scanf("%d",&persons[1].block);
    scanf("%s",persons[1].city);
    scanf("%s",persons[1].state);
    printf("Enter record of 3rd person");
    scanf("%d",&persons[2].houseNo);
    scanf("%d",&persons[2].block);
    scanf("%s",persons[2].city);
    scanf("%s",persons[2].state);
    printf("Enter record of 4rth person");
    scanf("%d",&persons[3].houseNo);
    scanf("%d",&persons[3].block);
    scanf("%s",persons[3].city);
    scanf("%s",persons[3].state);
    printf("Enter record of 5th person");
    scanf("%d",&persons[4].houseNo);
    scanf("%d",&persons[4].block);
    scanf("%s",persons[4].city);
    scanf("%s",persons[4].state);
    
    printinfo(persons[0]);
    printinfo(persons[1]);
    printinfo(persons[2]);
    printinfo(persons[3]);
    printinfo(persons[4]);
    return 0;
}

void printinfo(struct address persons){
    printf("%d %d %s %s \n",persons.houseNo,persons.block,persons.city,persons.state);
}