
#include <stdio.h>

void TOH(char BEG,char AUX,char END,int n){
if(n==1){
printf("move disk %d from %c-->%c\n",n,BEG,END);
return ;
}
TOH(BEG,END,AUX,n-1);
printf("move disk %d from %c-->%c\n",n,BEG,END);
TOH(AUX,BEG,END,n-1);
}
int main()
{   char BEG='A',AUX='B',END='C';
    int n;
    printf ("Sadanand Vishwas 16115068\n");
    printf("Enter Number of disks :");
    scanf("%d",&n);
    printf("Solution of T.O.H. for %d disks is:\n",n);
    TOH(BEG,AUX,END,n);
    return 0;
}
