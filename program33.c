#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        s+=a[i];
        printf("%d ",s/(i+1));
    }
    return 0;
}