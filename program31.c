#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,k;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the value\n");
    scanf("%d",&k);
    for(i=0;i<n-1;i=i+2)
    if((a[i]+a[i+1])%k!=0)
    {
        printf("False");
        exit(0);
    }
    printf("True");
    return 0;
}