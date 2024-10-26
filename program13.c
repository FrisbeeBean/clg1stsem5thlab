#include<stdio.h>
int main()
{
	int n,i,j,t,s;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter sum value\n");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		if(a[i]+a[j]==s)
		goto sen;
	}
	printf("False");
	sen: printf("The triplet is %d,%d",a[i],a[j]);
	return 0;
}

	
