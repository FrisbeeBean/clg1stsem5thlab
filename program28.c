#include<stdio.h>
int main()
{
    int i,n;
    int a[20],k;
    printf("Enter the size of array\n");
	scanf("%d",&n);
    printf("Enter the elements of the sorted array in ascending order\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    printf("Enter the number\n");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    if(a[i]>=k)
    {
        printf("The ceiling of %d is %d",k,a[i]);
        break;
    }
    return 0;
}
