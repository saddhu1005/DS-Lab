#include <stdio.h>
#define mx 100
int row,col,i,j;
int mat[mx][mx];
void sparsetype(){
int ltr=1,utr=1,tdr=1;
 for(i=0;i<row;i++){
        for(j=0;j<col;j++){
        if(i<j){
         if(mat[i][j]!=0)
               ltr=0;
        }
        else if (i>j){
             if(mat[i][j]!=0)
                utr=0;
        }
        if((i==j ||i==j+1 || i==j-1)&&row>3)
            continue ;
        if(mat[i][j]!=0)
            tdr=0;
        }
       }
       printf("The input matrix is ");

        if(ltr==1 && utr==0){
            printf("Lower triangular sparse matrix.\n");
             return ;
        }
        else if(utr==1 && ltr==0){
            printf("Upper triangular sparse matrix.\n");
        return ;
        }
        else {
           printf("Tridiagonal sparse matrix.\n");
           return ;
        }

}

int main()
{    printf("16115068 Sadanand Vishwas\n");
    printf("Enter size of square sparse matrix (>2 2):");
    scanf("%d%d",&row,&col);
    printf("Enter elements of a sparse matrix :\n");
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            scanf("%d",&mat[i][j]);

    sparsetype();

    return 0;
}
