#include<stdio.h>
#include<stdlib.h>
struct node    /*Using singly linked list*/
{
int data;
struct node* next;
};
struct node* start=NULL,*last=NULL;

void display(){
struct node* tmp=start;
if(start==NULL)
    printf("\nEmpty list");
else{   printf("\n");
        do{
            printf(" %d",tmp->data);
            tmp=tmp->next;
        }
    while(tmp!=start);
}
}
void insert()   /*Insertion at beginning*/
{struct node* ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
   printf("\nOverflow");
   return;
}
int item;
printf("\nEnter item to insert :");
scanf("%d",&item);
ptr->data=item;
if(start==NULL)
{ ptr->next=ptr;
  start=last=ptr;
}
else
{ ptr->next=start;
    last->next=ptr;
    start=ptr;
}
}
void delete()    /*Deletion at beginning*/
{  int item;
    if(start==NULL)
      {
        printf("\nUnderflow");
        return ;
      }
    else
    {  item=start->data;
        if(start->next==start)
        { start=NULL;
         last=NULL;
        }
        else
        {
            start=start->next;
            last->next=start;
        }

    }
    printf("\n%d was deleted ",item);
}
int main()
{
int ch;
printf("\n16115068 Sadanand Vishwas ");
do{
    printf("\n1.Insertion");
    printf("\n2.Deletion");
    printf("\n3.Display");
    printf("\n4.Exit");
    printf("\nEnter choice :");
    scanf("%d",&ch);
    switch(ch)

    {
        case 1:insert();break;
        case 2:delete();break;
        case 3:display();break;
        case 4:break;
        default:
            printf("\nwrong choice..");

    }
}while(ch!=4);

return 0;
}
