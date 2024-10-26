#include<stdio.h>
int main()
{
	int n,i,j,t,c=1,can;
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
	can=a[0];
	for(i=1;i<n;i++)
	{
		if(can==a[i])
		c++;
		else
		c--;
		if(c==0)
		{
			can=a[i];
			c=1;
		}
	}
	c=0;
	for(i=0;i<n;i++)
	{
		if(can==a[i])
		c++;	
	}
	if(c>n/2)
	printf("the frequency of majority element %d is %d",can,c);
	else
	printf("There is no majority element");
	return 0;
}

