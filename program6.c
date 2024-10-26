#include<stdio.h>
int main()
{
	int n,i,j,t,k;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter k value\n");
	scanf("%d",&k);
	for(i=0;i<n-1;i++)
	for(j=0;j<n-i-1;j++)
	if(a[j]>a[j+1])
	{
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;	
	}
	printf("The %d smallest value is %d\n",k,a[k-1]);
	printf("The %d biggest value is %d\n",k,a[n-k]);
	return 0;
}

