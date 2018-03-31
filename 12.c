#include<stdio.h>
#define mx 10005
int ar[mx][mx]={0};
int n;
void print(){
int i,j;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d\t",ar[i][j]);
}
printf("\n");
}
}
int csafe(int r,int c){
int i,j;
for(i=0;i<c;i++){
    if(ar[r][i]==1)
    return 0;
}
 i=r-1;
    for(j=c-1;j>=0 && i>=0;){

        if(ar[i][j]==1)
            return 0;
             i--;j--;
    }

    i=r+1;
    for(j=c-1;j>=0 && i<n;)
    {

        if(ar[i][j]==1)
            return 0;
             i++;j--;
    }

    return 1;

}
int qsolve(int col){
  int i=0;
    if(col>=n)
    return 1;
for( i=0;i<n;i++){
    if(csafe(i,col)==1){
        ar[i][col]=1;
        if(qsolve(col+1)==0){
            ar[i][col]=0;
            continue ;
        }
        else
            break ;
    }
}
if(i>=n)
    return 0;

}
void solve(){
if(qsolve(0)==0){
printf("no solution\n");
return ;
}
print();
}
int main(){
    printf ("Sadanand Vishwas 16115068\n");

printf("Enter number of queens :");
scanf("%d",&n);

solve();



return 0;
}

