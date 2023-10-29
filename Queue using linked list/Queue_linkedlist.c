#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *link;
};

struct node *Front = NULL, *Rear = NULL;

void insert()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter a value\n");
    scanf("%d", &temp->data);
    if (Front == NULL)
    {
        Front = temp;
        Rear = temp;
        temp->link = NULL;
    }
    else
    {
        Rear->link = temp;
        Rear = temp;
    }
}

void delete()
{
    if (Front == NULL)
    {
        printf("Queue underflow\n");
    }
    else
    {
        if (Front == Rear)
        {
            Front = NULL;
            Rear = NULL;
        }
        else
        {
            Front = Front->link;
        }
    }
}

void display()
{
    if (Front == NULL)
    {
        printf("Empty Queue\n");
    }
    else
    {
        struct node *temp;
        temp=Front;
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->link;
        }
    }
}

int main()
{
    while(1)
    {
        printf("Enter 1 to insert\n");
        printf("Enter 2 to delete\n");
        printf("Enter 3 to display\n");
        printf("Enter 4 to exit\n");

        int choice;
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("End of program\n");
        default:
            printf("Invalid input\n");
            break;
        }
        if(choice==4)
         break;
    }
}