/* Quick Sort */

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
int partition(int A[], int low, int high)
{
    int pivot = A[high];
    int i = low-1,j;

    for ( j = low; j <= high- 1; j++)
    {
        if (A[j] <= pivot)
        {
            i++;
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[i + 1], &A[high]);
    return (i + 1);
}
void quick_sort(int A[],int low,int high)
{

  if (low < high)
    {
        int pi = partition(A, low, high);
        quick_sort(A, low, pi - 1);
        quick_sort(A, pi + 1, high);
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
     int low=0,high=n-1;
quick_sort(A,low,high);
 printf("\nSorted Aay is-:");
display(A,n);
return 0;
}
