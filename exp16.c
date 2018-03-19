
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
 while(tmp->data!=value){
     tmp=tmp->forw;
 }
     ptr->backw=tmp;
     ptr->forw=tmp->forw;
     tmp->forw=ptr;
 }
 
}
void deleteBeg(){
    
}
void deleteEnd(){
    
}
void deleteNode(){
    
}
void insert(){
    int ch;
printf("\n1.Insert at begining.");
printf("\n2.Insert at end");
printf("\n3.Insert after a given node");
printf("\nenter your choice");
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
printf("\n1.Delete from begining.");
printf("\n2.Delete from end");
printf("\n3.Delete after a given node");
printf("\nenter your choice");
scanf("%d",&ch);
switch(ch){
    case 1:deleteBeg();break;
    case 2:deleteEnd();break;
    case 3:deleteNode();break;
    default:printf("\nwrong choice");
}
}
int main()
{
int ch;
    //printf("16115068 Sadanand Vishwas\n");
    do {
       
        printf("\n1.Insertion");
        printf("\n2.Deletion");
        printf("\n3.Quit");
        printf("\nenter your choice :");
        scanf("%d",&ch);
        switch(ch){
            case 1: insert();break;
            case 2:delete();break;
            case 3:break;
            default:printf("\nwrong choice");
        }
    }while(ch!=3);

    return 0;
}
