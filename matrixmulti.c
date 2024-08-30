#include <stdio.h>
#include <stdlib.h>
void matrixmulti(int **firstmatrix,int row1,int col1,int **secondmatrix,int row2,int col2,int **finalmatrix){
    int i,j,k;
    if(col1!=row2){
        printf("Invalid dimensions!!");
        return ;
    }
    for(i=0;i<row1;i++){
        for(j=0;j<col2;j++){
            finalmatrix[i][j]=0;
            for(k=0;k<col1;k++){
                finalmatrix[i][j]=finalmatrix[i][j]+(firstmatrix[i][k]*secondmatrix[k][j]);
            }
        }
    }
}
void printmatrix(int **matrix,int row,int col){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
                printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
void freematrix(int **matrix,int row){
    int i;
    for(i=0;i<row;i++){
        free(matrix[i]);
    }
    free(matrix);
}
int main(){
    int i,j;
    int **fmat,r1,c1;
    printf("Enter the dimensions of first matrix");
    scanf("%d %d",&r1,&c1);
    fmat=(int**)malloc(r1*sizeof(int));
    for(i=0;i<r1;i++){
        fmat[i]=(int*)malloc(c1*sizeof(int));
    }
    printf("Enter values for first matrix:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("m1[%d][%d]:",i+1,j+1);
            scanf("%d",&fmat[i][j]);
        }
    }
    int **smat,r2,c2;
    printf("Enter the dimensions of second matrix");
    scanf("%d %d",&r2,&c2);
    smat=(int**)malloc(r2*sizeof(int));
    for(i=0;i<r2;i++){
        smat[i]=(int*)malloc(c2*sizeof(int));
    }
    printf("Enter values for second matrix:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("m2[%d][%d]:",i+1,j+1);
            scanf("%d",&smat[i][j]);
        }
    }
    int **rmat;
    rmat=(int**)malloc(r1*sizeof(int));
    for(i=0;i<r1;i++){
        rmat[i]=(int*)malloc(c2*sizeof(int));
    }
    matrixmulti(fmat,r1,c1,smat,r2,c2,rmat);
    printmatrix(rmat,r1,c2);
    freematrix(fmat,r1);
    freematrix(smat,r2);
    freematrix(rmat,r1);

}
