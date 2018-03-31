#include <stdio.h>
const int size=2;
int top,i;
void display (int stack[])
{    printf ("\nThe Stack is: ");
    if (top == -1)
printf ("empty");
    else
    {   for (i=top; i>=0; --i)
  printf ("\n-----\n|%2d |\n-----",stack[i]);
    }
    printf ("\n");
}
void push(int stack[]){
    int value;
if(top==size-1){
printf("Overflow\n");
return ;
}
printf("Enter the element to push :");
scanf("%d",&value);
stack[++top]=value;
display(stack);
}
void pop(int stack[]){

if(top==-1){
printf("Underflow\n");
return ;
}
stack[top--]=NULL;
display(stack);

}
int main()
{  int stack[size],choice;
top=-1;
    printf("16115068 Sadanand Vishwas\n");
      while(1){
    printf("Stack Operations:\n1.PUSH\n2.POP\n3.Exit\n");
    printf("Choose from menu :");
    scanf("%d",&choice);
    switch(choice){
    case 1: push(stack);
    break ;
    case 2: pop(stack);
    break;
    case 3:
    return 1;
    default :
    printf("Wrong choice\n");

    }

    }
    return 0;
    }




