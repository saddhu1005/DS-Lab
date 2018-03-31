/*Insertion short*/

#include<stdio.h>
#define max 50
void display(int A[],int n)
{  int i;
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
    printf("\n");
}void ins_sort(int A[],int n)
{
    int i,j;
    int temp;
    for(i=0;i<n;i++)
    { temp=A[i];j=i-1;
    while(temp<A[j] && j>=0)
    {
        A[j+1]=A[j];
        j-=1;
    }
    A[j+1]=temp;

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
ins_sort(A,n);
 printf("\nSorted Array is-:");
display(A,n);
return 0;
}
