
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *forw,*backw;
};
struct node *start=NULL;
void insertBeg(){
    int item;
 struct node* ptr=(struct node*)malloc(sizeof(struct node));
 if(ptr==NULL){
     printf("\nOverflow");
     return;
 }
 printf("\nenter item to insert:");
 scanf("%d",&item);
 ptr->data=item;
 ptr->forw=NULL;
 ptr->backw=NULL;
 if(start==NULL)
 start=ptr;
 else
 {
     ptr->forw=start;
     start->backw=ptr;
     start=ptr;
 }
// printf("\nItem %d Inserted",item);
}
void insertEnd(){
    int item;
struct node* ptr=(struct node*)malloc(sizeof(struct node));
 if(ptr==NULL){
     printf("\nOverflow");
     return;
 }
 printf("\nenter item to insert:");
 scanf("%d",&item);
 ptr->data=item;
 ptr->forw=NULL;
 ptr->backw=NULL;
 if(start==NULL)
 start=ptr;
 else
 { struct node* tmp;
 tmp=start;
 while(tmp->forw!=NULL){
     tmp=tmp->forw;
 }
     tmp->forw=ptr;
     ptr->backw=tmp;
    
 }
// printf("\nItem %d Inserted",item);
}
void insertNode(){
    int item,value;
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
 if(ptr==NULL){
     printf("\nOverflow");
     return;
 }
 printf("\nenter item after which item to be inserted :");
 scanf("%d",&value);
 printf("\nenter item to insert:");
 scanf("%d",&item);
 ptr->data=item;
 ptr->forw=NULL;
 ptr->backw=NULL;
 if(start==NULL)
 start=ptr;
 else
 {struct node* tmp;
 tmp=start;
 while(tmp->data!=value && tmp!=NULL){
     tmp=tmp->forw;
 }
     ptr->backw=tmp;
     ptr->forw=tmp->forw;
     tmp->forw=ptr;
 }
// printf("\nItem %d Inserted",item);
}
void deleteBeg(){
int item;
if(start==NULL)
printf("\nUnderflow");
else
{
item=start->data;
start=start->forw;
start->backw=NULL;
}
printf("\nItem %d deleted",item);
}
void deleteEnd(){
  int item;
if(start==NULL)
printf("\nUnderflow");
else
{
item=start->data;
struct node* tmp;
 tmp=start;
 while(tmp->forw!=NULL){
     tmp=tmp->forw;
 }
tmp->backw->forw=NULL;
tmp->backw=NULL;
}
printf("\nItem %d deleted",item);  
}
void deleteNode(){
      int item,value;
if(start==NULL)
printf("\nUnderflow");
else
{
     printf("\nenter item to be deleted :");
 scanf("%d",&value);
item=start->data;
struct node* tmp;
 tmp=start;
 while(tmp->data!=value && tmp!=NULL){
     tmp=tmp->forw;
 }

tmp->forw->backw=tmp->backw;
tmp->backw->forw=tmp->forw;
}
printf("\nItem %d deleted",item);  
}

void insert(){
    int ch;
    printf("\nwhere do you wanna insert ?");
printf("\n1.Insert at begining.");
printf("\n2.Insert at end");
printf("\n3.Insert after a given node");
printf("\nenter your choice :");
scanf("%d",&ch);
switch(ch){
    case 1:insertBeg();break;
    case 2:insertEnd();break;
    case 3:insertNode();break;
    default:printf("\nwrong choice");
}
}
void delete(){
        int ch;
        printf("\nfrom where do you wanna delete ?");
printf("\n1.Delete from begining.");
printf("\n2.Delete from end");
printf("\n3.Delete  a given node");
printf("\nenter your choice :");
scanf("%d",&ch);
switch(ch){
    case 1:deleteBeg();break;
    case 2:deleteEnd();break;
    case 3:deleteNode();break;
    default:printf("\nwrong choice");
}
}
void display(){
    struct node* tmp;
    if(start==NULL)
    printf("\nempty list");
    else
    { tmp=start;
    while(tmp!=NULL){
        printf("%d  ",tmp->data);
        tmp=tmp->forw;
    }
    }
    printf("\n");
}
int main()
{
int ch;
    //printf("16115068 Sadanand Vishwas\n");
    do {
       
        printf("\n1.Insertion");
        printf("\n2.Deletion");
        printf("\n3.Display");
        printf("\n4.Quit");
        printf("\nenter your choice :");
        scanf("%d",&ch);
        switch(ch){
            case 1: insert();break;
            case 2:delete();break;
            case 3:display();break;
            case 4:break;
            default:printf("\nwrong choice");
        }
    }while(ch!=4);

    return 0;
}
