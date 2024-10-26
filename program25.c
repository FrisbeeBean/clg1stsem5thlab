#include<stdio.h>
int main()
{
    int a[3][3],i,j,s=0;
    printf("Enter elements of the array\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
    {
        s+=a[i][i];
    }
    printf("The sum of right diagonal is %d",s);
    return 0;
}