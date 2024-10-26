#include<stdio.h>
int main()
{
	int i,j,n,k=0,x;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	x=0;
	for(j=0;j<k;j++)
		if(a[i]==b[j])
		{
		x=1;
		break;
		}
		if(x==0)
		{
			b[k++]=a[i];
		}
	}	
	for(i=0;i<k;i++)
	printf("%d ",b[i]);
	return 0;
}
