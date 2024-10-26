#include<stdio.h>
#include<math.h>
int main()
{
    int i,s1=0,s2=0,n;
    printf("Enter the size of the even array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n/2;i++)
    s1+=a[i];
    for(i=n/2;i<n;i++)
    s2+=a[i];
    printf("Minimum value to be added to make the array balanced is %d",abs(s1-s2));
    return 0;
}