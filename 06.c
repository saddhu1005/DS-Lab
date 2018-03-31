#include <stdio.h>
#define mx 100
int row,col,i,j;
int mat[mx][mx];
int mat2[mx][mx];
int isparse(){
     int count=0;
for(i=0;i<row;i++){
        for(j=0;j<col;j++){

        if(mat[i][j]==0)
        count++;
        }
    }
 if(count>(row*col)/2){
        printf("Entered matrix is sparse matrix .\n");
        return 1;
    }
    else {
        printf("Entered Matrix is not a sparse Matrix \n");
        return 0;
    }
}
void transpose()
{
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        mat2[j][i]=mat[i][j];
    }
}

printf("\n Transpose of given matrix is :\n");
for(i=0;i<col;i++){
    for(j=0;j<row;j++){
        printf("%d\t",mat2[i][j]);
    }
    printf("\n");
}
}
void tupleform(int count){
    printf("\n3-tuple form of given matrix is :\n");
    printf("%d\t%d\t%d\n",row,col,count);
for(i=0;i<row;i++)
    for(j=0;j<col;j++)
if(mat[i][j]!=0){
    printf("%d\t%d\t%d\n",i+1,j+1,mat[i][j]);
}

}

int main()
{ int flag=0,count=0;
 printf("16115068 Sadanand Vishwas\n");
    printf("Enter order of matrix (n n):");
    scanf("%d%d",&row,&col);
    printf("Enter elements of matrix :\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
        scanf("%d",&mat[i][j]);
        if(mat[i][j]!=0)
            count++;
        }
    }
   flag=isparse();
   if(flag){
     transpose();
   tupleform(count);
   }

    return 0;
}
