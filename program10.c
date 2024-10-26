#include<stdio.h>
int main()
{
	int i,j,n,t;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	for(j=n-1;j>i;j--)
	{
		if(a[i]==a[j])
		{
		t=a[i];
		goto sen;
		}
	}
	sen: printf("The first repeating element is %d",t);
	return 0;
}
