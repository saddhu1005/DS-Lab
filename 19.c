// Linked List implementation of Queue

#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*front = NULL,*rear = NULL;

void enQueue()
{ int value;
   struct node *ptr;
   ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\nOverflow..");
return;
}
printf("Enter item to insert: ");
                     scanf("%d", &value);
   ptr->data = value;
   ptr->next=NULL;
   if(rear==NULL && front==NULL){
     front=rear=ptr;
   }
   else {
     rear->next=ptr;
     rear=ptr;
   }

}

void deQueue()
{
   if(front==NULL)
printf("\nUnderflow");
   else
   {
      struct node *temp=front;
      printf("%d was Deleted\n",temp->data);
      if(front==rear){
        front=rear=NULL;
      }
      else

      front=temp->next;
     // free(temp);
   }
}
void display()
{
   if(front==NULL && rear==NULL)

      printf("Queue is Empty !!\n");

   else
   {
      struct node *temp=front;
      printf("Queue : ");
      while(temp!=NULL)
      {
        printf("->%d ",temp->data);
        temp = temp -> next;
      }
   }
}

int main()
{
    int ch;
    printf("\n16115068 Sadanand Vishwas");
    while(1)
    {

        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
                     enQueue();
                     break;
            case 2 : deQueue();
                     break;
            case 3 : display();
                     break;
            case 4 : return 1;
            default: printf("\nWrong Choice..");        }
    }
    return 0;

}
