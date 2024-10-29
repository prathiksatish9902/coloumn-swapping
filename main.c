#include <stdio.h>

int main()
{
    int i , j , a[3][3];
    printf("enter the elements:");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("the swapped coloumn matrix is:\n");
    for(int i=0;i<3;i++){
        for(int j=3;j>0;j--){
            printf("%d ",a[i][j-1]);
        }
        printf("\n");
    }
    return 0;
}
