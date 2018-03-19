/******************************************************************************


#include <stdio.h>
struct node
{
    int data;
    struct node *forw,*backw;
}
struct node *start=NULL;
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
        printf("\n\n\n");
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
    }while(ch!=3)

    return 0;
}
