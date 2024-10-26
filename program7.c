#include<stdio.h>
int main()
{
	int i,k,n,c=0;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter k value\n");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	if(a[i]==k)
	c++;
	printf("Number %d is present %d times",k,c);
	return 0;
}
