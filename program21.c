#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter elements of the array\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    printf("The 3x3 matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}