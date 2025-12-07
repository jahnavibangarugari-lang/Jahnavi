#include <stdio.h>
int main()
{
	int a[100],n,i;
	printf("\n enter array size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter value at a[%d] position",i);
		scanf("%d",&a[i]);
	}
	printf("\n reverse the array elements are");
	for(i=n-1;i>=0;i--)
	{
		printf("\t %d",a[i]);
	}
	return 0;
}
