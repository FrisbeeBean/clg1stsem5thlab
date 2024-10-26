#include<stdio.h>
int main()
{
    int a[3][3],i,j,b[3][3];
    printf("Enter elements of the array\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    printf("The 3x3 transpose matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}