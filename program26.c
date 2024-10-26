#include<stdio.h>
int main()
{
    int a[3][3],i,j,n=3,s=0;
    printf("Enter elements of the array\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
    {
        s+=a[i][n-i-1];
    }
    printf("The sum of left diagonal is %d",s);
    return 0;
}