#include<stdio.h>
int main()
{
	int n,i,j,s=0,t;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	for(j=0;j<n-i-1;j++)
	if(a[j]>a[j+1])
	{
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;	
	}
	printf("The minimum value is %d\n",a[0]);
	printf("The maximum value is %d\n",a[n-1]);
	for(i=0;i<n;i++)
	s+=a[i];
	printf("The average value is %.3f",(float)s/n);
	return 0;
}

