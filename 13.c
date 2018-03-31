#include <stdio.h>
#define n 10
//linear queue
int Q[n];
int f=0,r=0;
void enqueue(){
    int item;

    if(r==n){
        printf("Overflow\n");
        return ;
    }

    if(f==0 && r==0){
        f=1;r=1;
    }
    else
        r=r+1;

    printf("enter item to insert:");
    scanf("%d",&item);
    Q[r-1]=item;
    printf("Item %d inserted\n",item);
}
void dequeue(){
    int item;
    if(f==0){
        printf("Underflow\n");
        return ;
    }
    item=Q[f-1];
    if(f==r){
        f=0;r=0;
    }
    else
        f=f+1;

    printf("Item %d Deleted\n",item);
}
void size(){
    int count=0;
    int tmp=f;
    while(tmp<=r && tmp!=0){
        count++;
        tmp++;
    }
    if(count!=0)
    printf("No. of elements in queue are %d\n",count);
    else
         printf("Queue is Empty\n");
}
void isempty(){
    if(f==0)
        printf("Queue is Empty\n");
        else
            printf("Not empty\n");
}

int main()
{   printf("16115068 Sadanand Vishwas\n");
int ch;

while(1){
    printf("1.insert\n2.Delete\n3.size\n4.isempty\n5.exit\n");
    printf("choose the operation :");
    scanf("%d",&ch);
    switch(ch){
    case 1:enqueue();break;
    case 2:dequeue();break;
    case 3:size();break;
    case 4:isempty();break;
    case 5:return 1;
    default: printf("wrong choice\n");
    return 2;
    }

}
    return 0;
}
