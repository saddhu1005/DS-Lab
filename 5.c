#include <stdio.h>
#include<string.h>
const int mx =20;

int main()
{

char name[mx][50],sname[50];
int i,n;
int LB,UB,mid,loc=0;
 printf("16115068 Sadanand Vishwas\n");

printf("Enter number of names on list :");
scanf("%d",&n);
printf("Enter Names in sorted order (small letters) :");
gets(name[0]);
for(i=0;i<n;i++){
gets(name[i]);
}

printf("Enter the name to be searched :");
gets(sname);

LB=0;UB=n-1;mid=(LB+UB)/2;
    while( LB<=UB){
        if(strcmp(name[mid],sname)==0){
            loc=mid;
            break;
        }
        if(strcmp(name[mid],sname)>0)
        UB=mid-1;
        else
        LB=mid+1;


 mid=(LB+UB)/2;

    }

    if(strcmp(name[mid],sname)==0){
    loc=mid;
    printf("Name %s found in location %d \n",sname,loc+1);
    }
    else
    printf("Name Not Found !\n");

    return 0;
}
