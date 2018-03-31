#include <stdio.h>
#define max 1000
int arr[max];
int n;
void traverse(int arr[]){
    int i;
printf("The elements of array are :\n");
for(i=0;i<n;i++){
printf("%d  ",arr[i]);
}
printf("\n Total elements in array is : %d \n",n);
}
void insert(int arr[]){
int ele,pos,i;
printf("Enter element and position to be inserted(1 based indexing):");
scanf("%d %d",&ele,&pos);
for(i=n-1;i>=pos-1;i--){
arr[i+1]=arr[i];
}
arr[pos-1]=ele;
n=n+1;
printf("Element inserted successfully \n");
for(i=0;i<n;i++){
printf("%d  ",arr[i]);
}
}
void deletet(int arr[]){
int ele,i,j,flag=0;
printf("\nEnter element to be deleted:");
scanf("%d",&ele);
for(i=0;i<n;i++){
    if(arr[i]==ele){
    for(j=i;j<n-1;j++)
    arr[j]=arr[j+1];
n=n-1;
i=i-1;
flag=1;
    }
}
if(flag)
printf("Element deleted successfully \n");
if(n<=0)
printf("Empty Array\n");
else if(!flag)
printf("Element Not Present .\n");
else
for(i=0;i<n;i++){
printf("%d  ",arr[i]);
}

}
int main()
{
   int i,choice;
 printf("16115068 Sadanand Vishwas\n");
   printf("Enter size of array :");
   scanf("%d",&n);
   printf("Enter elemenets of array :\n");
   for(i=0;i<n;i++){
   scanf("%d",&arr[i]);
   }
   while(1){

   printf("\n1.Traverse.\n2.Insert.\n3.Delete.\n4.Exit\n");
    printf("Enter The operation : ");
   scanf("%d",&choice);
   switch(choice){
   case 1: traverse(arr);
   break;
   case 2: insert(arr);
   break;
   case 3: deletet(arr);
   break;
   case 4: exit(0);
   default :
   printf("Wrong choice \f Try Again\n ");

   }
   }
    return 0;
}
