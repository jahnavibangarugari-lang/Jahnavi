#include <stdio.h>
int main()
{
	int arr[1000],n,i,sum=0;
	printf("\n enter array size");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("\n %d",sum);
	return 0;
}
