/* Selection Sort */

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
int min(int A[],int n,int k)
{   int i,min=A[k],loc=k;
    for(i=k+1;i<n;i++)
    {
        if(A[i]<min)
        {
            min=A[i];
            loc=i;
        }
    }
    return loc;
}
void sel_sort(int A[],int n)
{
        int i,j;
        for(i=0;i<n;i++)
        {
        j=min(A,n,i);
        swap(&A[i],&A[j]);
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
sel_sort(A,n);
 printf("\nSorted Array is-:");
display(A,n);
return 0;
}
