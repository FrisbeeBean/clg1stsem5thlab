#include<stdio.h>
int main()
{
	int n,i,t;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i+=2)
	{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;	
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}

