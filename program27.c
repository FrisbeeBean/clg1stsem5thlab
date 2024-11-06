#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter elements of the array\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
    if((i!=j && a[i][j]!=0) || (i==j && a[i][j]!=1))
    goto ben;
    }
    printf("Identity matrix");
    exit(0);
    ben: printf("Not identity matrix");
    return 0;
}
