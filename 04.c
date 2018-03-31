#include <stdio.h>
const int mx= 100;
int main()
{
    int i,n,search,mid,beg,end,loc=0;
    int arr[mx];
 printf("16115068 Sadanand Vishwas\n");
    printf("Enter size of Array :");
    scanf("%d",&n);
    printf("Enter elements of array in sorted manner :");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter search Element :");

    scanf("%d",&search);
    beg=0;end=n-1;mid=(beg+end)/2;

    while( beg<=end){
        if(arr[mid]==search){
            loc=mid;
            break;
        }
        if(search<arr[mid])
        end=mid-1;
        else
        beg=mid+1;


 mid=(beg+end)/2;

    }

    if(arr[mid]==search){
    loc=mid;
    printf("element %d found in location %d \n",search,loc+1);
    }
    else
    printf("Element Not Found !\n");


    return 0;
}
