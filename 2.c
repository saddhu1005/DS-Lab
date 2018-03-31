#include <stdio.h>
#define max 100
int main()
{
   int n,i,arr[max],maxnum,minnum;
 
   printf("16115068 Sadanand Vishwas\n");
   printf("Enter size of array :");
   scanf("%d",&n);
   printf("Enter elemenets of array :\n");
   for(i=0;i<n;i++){
   scanf("%d",&arr[i]);
   }
   maxnum=arr[0];
   minnum=arr[0];
   for(i=1;i<n;i++){
   if(arr[i]<minnum)
   minnum=arr[i];
   if(arr[i]>maxnum)
   maxnum=arr[i];
   }
   printf("Max And Min elements of array are:\n Max \t %d \n Min \t %d\n",maxnum,minnum);
    return 0;
}
