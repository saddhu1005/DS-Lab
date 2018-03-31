/* Bubble Sort */

#include<stdio.h>
#define max 50
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
void display(int A[],int n)
{  int i;
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
    printf("\n");
}
void bubble_sort(int A[],int n)
{ int i,j,count;
  for(i=n;i>0;i--)
    {  count=0;
    for(j=1;j<i;j++)
    {
        if(A[j]<A[j-1])
         {
             swap(&A[j],&A[j-1]);
             count++;
         }
    }
    if(!count)
        break;
    }
}
int main()
{
printf("\n16115068 Sadanand Vishwas");
int n,A[max],i;
printf("\nEnter size of array :");
scanf("%d",&n);
printf("\nEnter elements-: ");
for(i=0;i<n;i++)
    scanf("%d",&A[i]);
bubble_sort(A,n);
 printf("\nSorted Array is-:");
display(A,n);
return 0;
}
