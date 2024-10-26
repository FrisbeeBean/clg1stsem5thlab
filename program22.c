#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,sum[3][3],s[3][3];
    printf("Enter elements of the first array\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    printf("Enter elements of the second array\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&b[i][j]);
    printf("The 3x3 addition matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    printf("The 3x3 subtraction matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            s[i][j]=a[i][j]-b[i][j];
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}