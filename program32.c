#include<stdio.h>
int main()
{
    int i,n,k,avg,j;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    b[i]=0;
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the value\n");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        avg=(a[i]+k)/2;
        for(j=0;j<n;j++)
        if(a[j]==avg)
        b[i]++;
    }
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
    return 0;
}