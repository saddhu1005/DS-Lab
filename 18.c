// Linked List Implementation of Stack

#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node *next;
}*top = NULL;

void push()
{  int value;
   struct Node *ptr;
   ptr=(struct Node*)malloc(sizeof(struct Node));
if(ptr==NULL){
printf("\nOverflow..");
return ;
}
printf("Enter item to insert: ");
                     scanf("%d", &value);
   ptr->data = value;
   if(top==NULL)
      ptr->next=NULL;
   else
      ptr->next=top;
   top=ptr;
}

void pop()
{
   if(top == NULL)
      printf("\nUnderflow\n");
   else{
      struct Node *temp = top;
      printf("%d was Deleted \n", temp->data);
      top = temp->next;
     // free(temp);
   }
}
void display()
{
   if(top==NULL)
      printf("Stack is Empty !!\n");
   else
   {
      struct Node *temp=top;
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
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
                     push();
                     break;
            case 2 : pop();
                     break;
            case 3 : display();
                     break;
            case 4 : return 1;
            default: printf("\nWrong Choice..");
      }
   }
   return 0;
}

