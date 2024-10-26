#include<stdio.h>
int main()
{
	int n,i,j,t,c;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n];
	int f[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	f[i]=0;
	for(i=0;i<n;i++)
	{
		if(f[i]==1)
		continue;
		c=1;
		for(j=i+1;j<n;j++)
		if(a[i]==a[j])
		{
			c++;
			f[j]=1;
		}
		printf("The frequency of %d is %d\n",a[i],c);
	}
	return 0;
}

