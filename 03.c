#include <stdio.h>
const int mx=100;
int main()
{
   int n,i,arr[mx],search;
 printf("16115068 Sadanand Vishwas\n");
   printf("Enter size of array :");
   scanf("%d",&n);
   printf("Enter elements of array :");
   for(i=0;i<n;i++){
   scanf("%d",&arr[i]);
   }
   printf("Enter the element to Search : ");
   scanf("%d",&search);
   for(i=0;i<n;i++){
   if(search==arr[i]){
   printf("Element %d found in position %d \n",search,i+1);
   break ;
   }
   }
   if(i>=n)
   printf("Element %d not found\n",search);

    return 0;
}
