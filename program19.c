#include<stdio.h>
int main()
{
    int i,p=0,n;
    int a[20],k;
    printf("Enter the size of array\n");
	scanf("%d",&n);
    printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    printf("Enter the number to insert\n");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k>a[i])
        p++;
    }
    for(i=n-1;i>=p;i--)
    a[i+1]=a[i];
    a[p]=k;
    printf("New array is");
    for(i=0;i<n+1;i++)
    printf(" %d",a[i]);
    return 0;
}
