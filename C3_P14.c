#include <stdio.h>
void main()
{
    int m,n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&m,&n);
    int matrix[m][n];
    printf("Enter elements: ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    int maxelement=matrix[0][0],row=0,col=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]>maxelement){
                maxelement=matrix[i][j];
                row=i;
                col=j;
            }
        }
    }
    printf("Largest element = %d",maxelement);
    printf("Position : (%d,%d)",row,col);
}