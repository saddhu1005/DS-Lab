#include <stdio.h>
#include <stdlib.h>
void insert();
void insertBeg();
void insertEnd();
void insertNode();
void deletes();
void deleteBeg();
void deleteEnd();
void deleteNode();
void display();
struct node
{
    int data;
    struct node * next;
};

struct node * start = NULL;

int main()
{  printf("\n\n\n");
    int ch;
    do{

        printf("\n1. Insertion");
        printf("\n2. Deletion");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                insert();
                break;
            case 2:
                deletes();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
            default:
                printf("\nWrong choice...");
        }
    }while (ch != 4);
    return 0;
}



void insert()
{

    printf("\n1. Insert at beginning");
    printf("\n2. Insert at end");
    printf("\n3. Insert after a given node\n");
     printf("\nWhere do you wanna insert?: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
        case 1:
            insertBeg();
            break;
        case 2:
            insertEnd();
            break;
        case 3:
            insertNode();
            break;
        default:
            printf("\nWrong choice...");
    }
}

void insertBeg()
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("Overflow\n");
        return;
    }
    else
    {
        ptr->next = NULL;
        int ele;
        printf("\nEnter element to be inserted: ");
        scanf("%d", &ele);
        ptr->data = ele;
        if(start != NULL)
            ptr->next = start;
        start = ptr;
    }
}

void insertEnd()
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOverflow");
        return;
    }
    else
    {
        ptr->next = NULL;
        int ele;
        printf("\nEnter element to be inserted: ");
        scanf("%d", &ele);
        ptr->data = ele;
        if (start == NULL)
        {
            start = ptr;
        }
        else
        {
            struct node* temp;
            temp = start;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
        }
    }
}

void insertNode()
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOverflow");
        return;
    }
    else if(start == NULL)
    {
        printf("\nNo nodes");
    }
    else
    {
        ptr->next = NULL;
        int ele, item;
        printf("\nEnter element to be inserted: ");
        scanf("%d", &ele);
        printf("\nEnter item after which element is to be inserted: ");
        scanf("%d", &item);
        ptr->data = ele;
        struct node *temp;
        temp = start;
        while (temp->data != item && temp != NULL)
        {
            temp = temp->next;
        }
        ptr->next = temp->next;
        temp->next = ptr;
    }
}

void display()
{
    struct node* temp = start;
    while(temp != NULL)
    {
        printf("\n%d", temp->data);
        temp = temp->next;
    }
    if(start==NULL)
        printf("\nEmpty");
}

void deletes()
{

    printf("\n1. Delete at beginning");
    printf("\n2. Delete at end");
    printf("\n3. Delete of a given node\n");
     printf("\nWhere do you wanna Delete?: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
        case 1:
            deleteBeg();
            break;
        case 2:
            deleteEnd();
            break;
        case 3:
            deleteNode();
            break;
        default:
            printf("\nWrong choice...");
    }
}

void deleteBeg()
{
    if(start == NULL)
    {
        printf("\nUnderflow...");
        return;
    }
    else
    {
        int ele = start->data;
        if(start->next == NULL)
            start = NULL;
        else
            start = start->next;
        printf("\n%d was deleted", ele);
    }
}

void deleteEnd()
{
    if(start == NULL)
    {
        printf("\nUnderflow...");
        return;
    }
    else
    {  int ele;
        struct node* temp = start;
        if(start->next==NULL)
        { ele=start->data;
        start=NULL;
        }
        else {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
         ele = temp->next->data;
        temp->next = NULL;

        }
        printf("\n%d was deleted", ele);
    }
}

void deleteNode()
{
    if(start == NULL)
    {
        printf("\nUnderflow...");
        return;
    }
    else
    {
        int ele;
        printf("\nInsert element to be deleted: ");
        scanf("%d", &ele);
        struct node* temp = start;
        if(start->data==ele )
        { ele=start->data;
        start=start->next;;
        }
        else {
        while(temp->next->data != ele)
        {
            temp = temp->next;
        }
        ele = temp->next->data;
        temp->next = temp->next->next;
        }
        printf("\n%d was deleted", ele);
    }
}
