#include<stdio.h>
int main()
{
    int n1,n2,i,s1=0,s2=0;
    printf("Enter the size of the first array\n ");
    scanf("%d",&n1);
    printf("Enter the size of the second array\n ");
    scanf("%d",&n2);
    int a[n1],b[n2];
    printf("Enter the elements of the first array\n");
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);
    printf("Enter the elements of the second array\n");
    for(i=0;i<n2;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n1;i++)
    s1=s1*10+a[i];
    for(i=0;i<n2;i++)
    s2=s2*10+b[i];
    printf("The sum of both the numbers is %d",s1+s2);
    return 0;
}