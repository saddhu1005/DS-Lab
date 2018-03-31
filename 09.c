#include <stdio.h>
#include <ctype.h>
#include<math.h>
#define SIZE 50

int stack[SIZE],top=-1,flag=0;
int pop()
{
  return(stack[top--]);
}

void push(int elem)
{
  if(flag==1){
    int num;
    num=pop();
    stack[++top]=elem+10*num;
  }
  else if(flag==0){
    stack[++top]=elem;
    flag=1;
  }
}
int main()
{
 printf("16115068 Sadanand Vishwas\n");
  char pofx[150],ch;
  int i=0,j,op1,op2,x;
  printf("Enter the Postfix Expression(a b *):");
  fgets(pofx,100,stdin);
  while( (ch=pofx[i++]) != '\n')
  {
    if(isdigit(ch)) push(ch-'0');
    else if(ch==' ')
      flag=0;
    else
    {
      flag=0;
      op2=pop();
      op1=pop();

      switch(ch)
      {
        case '+':push(op1+op2);break;
        case '-':push(op1-op2);break;
        case '*':push(op1*op2);break;
        case '/':push(op1/op2);break;
        case '^':x=1;
            for(j=1;j<=op2;j++)
                    x*=op1;
                   push(x);break;
        default:
                 printf("Input invalid ... give proper input\n");
                 return 1;
      }
    }
  }
  printf("Result: %d\n",stack[top]);
  return 0;
}
