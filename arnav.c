#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
    int id;
    char company[50];
    char name[50];
    char model[50];
    char date[20];
    char contact[20];
    struct node *next;
};

struct node *head = NULL;

void insert()
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL)
    {
        printf("node is not being created:)\n");
        return;
    }

    int c_id;
    char c_name[30], c_company[30], c_model[30], c_date[30], contact_no[30];
    printf("Customer ID: ");
    scanf("%d",&c_id);
    printf("Name: ");
    scanf(" %[^\n]",&c_name);
    printf("Company: ");
    scanf(" %[^\n]",&c_company);
    printf("Model: ");
    scanf(" %[^\n]",&c_model);
    printf("Date Of Purchase: ");
    scanf(" %[^\n]",&c_date);
    printf("Customer Contact: ");
    scanf(" %[^\n]",&contact_no);

    newNode->id = c_id;
    strcpy(newNode->name, c_name);
    strcpy(newNode->company, c_company);
    strcpy(newNode->model, c_model);
    strcpy(newNode->date, c_date);
    strcpy(newNode->contact, contact_no);
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }else{
        struct node *tempnode = head;
        while (tempnode->next != NULL)
        {
            tempnode = tempnode->next;
        }
        tempnode->next = newNode;
        
    }

    printf("Record inserted successfully!\n");
}

void display()
{
    if (head == NULL)
    {
        printf("No record found to display!\n");
        return;
    }
    struct node *temp = head;
    printf("\nID\tCUSTOMER NAME\tCOMPANY\tMODEL\t\tPURCHASE DATE\tCONTACT NO.\n\n");
    while(temp != NULL)
    {
        printf("%d\t%s\t%s\t%s\t%s\t%s\n\n", temp->id, temp->name, temp->company, temp->model, temp->date, temp->contact);
        temp = temp->next;
    }
}

void delete()
{
    int c_id;
    printf("Enter ID : ");
    scanf("%d", &c_id);

    struct node *temp = head;

    if (temp == NULL)
    {
        printf("\nList is empty\n");
        return;
    }

    if (temp->id == c_id)
    {
        head = temp->next;
        free(temp);
        printf("Item with ID %d deleted\n", c_id);
        return;
    }

    struct node *prev;

    while (temp != NULL && temp->id != c_id)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("\nRecord not found\n");
        return;
    }else{
        prev->next = temp->next;
        free(temp);
        printf("Item with ID %d deleted\n", c_id);
    }
}

void update()
{

    int choice;
    stp:
    printf("Press 1 to update name \n");
    printf("Press 2 to update contact number \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        struct node *ptr = head;
        int id, c = 0;
        char name[50];
        printf("\nEnter id : ");
        scanf("%d", &id);
        while (ptr != NULL)
        {
            if (ptr->id == id)
            {
                printf("\nEnter updated name: ");
                scanf(" %[^\n]", &name);
                strcpy(ptr->name, name);
                printf("Record updated successfully!\n");
                c = c + 1;
                return;
            }
            ptr = ptr->next;
        }
        if (c == 0)
        {
            printf("\nRecord not found!");
        }
        return;
    }
    else if (choice == 2)
    {
        struct node *ptr = head;
        int id, c = 0;
        char contact[50];
        printf("\nEnter id: ");
        scanf("%d", &id);
        while (ptr != NULL)
        {
            if (ptr->id == id)
            {
                printf("\nEnter updated contact: ");
                scanf("%s", &contact);
                strcpy(ptr->contact, contact);
                printf("Record updated successfully!\n");
                c = c + 1;
                return;
            }
            ptr = ptr->next;
        }
        if (c == 0)
        {
            printf("\nRecord not found!");
        }
        return;
    }
    else
    {
        printf("Invalid choice!\n");
        goto stp;
    }
}

void search()
{
    int choice;
    stp:
    printf("Press 1 to search with the help of id \n");
    printf("Press 2 to search with the help of company name \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 2)
    {
        struct node *ptr = head;
        int c = 0;
        char company[30];
        printf("Enter company name: ");
        scanf("%s", &company);
        if (ptr == NULL)
        {
            printf("\nList is empty!\n");
            return;
        }
        while (ptr != NULL)
        {
            if (strcmp(ptr->company,company) == 0)
            {
                printf("\n%d\t%s\t%s\t%s\t%s\t%s\n", ptr->id, ptr->name, ptr->company, ptr->model, ptr->date, ptr->contact);
                c = 1;
            }
            ptr = ptr->next;
        }
        if (c == 0)
        { 
            printf("\nRecord not found!");
        }
        return;
    }
    else if (choice == 1)
    {
        struct node *ptr = head;
        int c = 0;
        int c_id;
        printf("Enter customer ID: ");
        scanf("%d", &c_id);
        if (ptr == NULL)
        {
            printf("\nList is empty!\n");
            return;
        }
        while (ptr != NULL)
        {
            if (ptr->id == c_id)
            {
                printf("\n%d\t%s\t%s\t%s\t%s\t%s\n", ptr->id, ptr->name, ptr->company, ptr->model, ptr->date, ptr->contact);
                break;
            }
            ptr = ptr->next;
        }
        if (c == 0)
        { 
            printf("\nRecord not found!\n");
        }
        return;
    }
}



void main()
{
    char choice = 'n';
    printf("\n\n\t\t\t\t---------------> MOBILE INVENTORY MANAGEMENT SYSTEM <---------------\n");
    printf("\n\nFollowing are the functions of this program-\n\n");
    printf("1. INSERT A RECORD\n");
    printf("2. DELETE  A RECORD\n");
    printf("3. SEARCH FOR A RECORD\n");
    printf("4. UPDATE A RECORD\n");
    printf("5. DISPLAY ALL RECORDS\n");
    printf("6. EXIT\n");
    
    
    while(choice == 'n')
    {
        
        int n;
        printf("Which function would you like to use? ");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            search();
            break;
        case 4:
            update();
            break;
        case 5:
            display();
            break;
        case 6:
            printf("Exiting program...\n");
            printf("Have a good day :)\n");
            return;
        default:
            printf("Invalid Choice \n");
            printf("Enter your choice again\n");
        }
        
    }
}