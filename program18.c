#include<stdio.h>
int main()
{
	int i,n,c1=0,c2=0;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int a[n],o[n],e[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
        if(a[i]%2==0)
        e[c1++]=a[i];
        else
        o[c2++]=a[i];
    }
	printf("Even array: ");
	for(i=0;i<c1;i++)
	printf("%d ",e[i]);
	printf("Odd array: ");
	for(i=0;i<c2;i++)
	printf("%d ",o[i]);
	return 0;
}
