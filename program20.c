#include<stdio.h>
int main()
{
    int i,p,c=0,n;
    int a[20],k;
    printf("Enter the size of array\n");
	scanf("%d",&n);
    printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    printf("Enter the number to insert\n");
    scanf("%d",&k);
    printf("Enter the position to insert\n");
    scanf("%d",&p);
    for(i=n-1;i>=p-1;i--)
    a[i+1]=a[i];
    a[p-1]=k;
    printf("New array is");
    for(i=0;i<n+1;i++)
    printf(" %d",a[i]);
    return 0;
}
