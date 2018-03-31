#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define size 50
int stack[size];
int top=-1;
int pop()
{  if(top==-1)
return 0;
else
  return (stack[top--]);
}
void push(char ch)
{
stack[++top]=ch;
}
int precedence(char ch){
switch(ch){
case '(':
    return 0;
case '-':
case '+':
    return 1;
case '*':
case '/':
    return 2;
case '^':
    return 3;
}
}
int main(){
    int i=0,k=0,l;
printf("16115068 Sadanand Vishwas\n");
printf("Enter Infix expression(a+b-c):");
char infix[100],p[100],ch,tmp;
gets(infix);
push('(');
l=strlen(infix);
infix[l]=')';
infix[l+1]='\0';
  while((ch=infix[i++]) != '\0')
  {
    if((isdigit(ch))||(ch>=97&& ch<=122)||(ch>=65 && ch<=90)) p[k++]=ch;
    else if(ch=='(') push(ch);
        else if(ch==')') {
              while(1){
                      tmp=pop();
                      if(tmp=='(') break;
                      p[k++]=tmp;
                      }
            }
            else {


                      while(1){
                    if(precedence(stack[top])>=precedence(ch))
                      p[k++]=pop();
                     else
                        break;
             }
             push(ch);
            }
  }
  p[k]='\0';
  printf("Postfix expression :%s\n",p);
return 0;
}
