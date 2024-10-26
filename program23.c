#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,k,n=3,s[3][3]={0};
    printf("Enter elements of the first array\n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    printf("Enter elements of the second array\n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&b[i][j]);
    printf("The 3x3 multiplication matrix is \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            s[i][j]+=a[i][k]*b[k][j];
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}