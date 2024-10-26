#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,c=0;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n-1];
	printf("Enter the elements of the array\n");
	for(i=0;i<n-1;i++)
	scanf("%d",&a[i]);
	for(j=1;j<=n;j++)
	for(i=0;i<n-1;i++)
	{
	if(j==a[i])
	{
		c++;
		break;
	}
	}
	printf("The mising element is %d",c);
	return 0;
}
