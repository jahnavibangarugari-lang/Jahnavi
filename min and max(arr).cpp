#include <stdio.h>
int main()
{
	int n,i,min,max,arr[n];
	printf("\n enter n value");
	scanf("%d",&n);
	printf("\n enter elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("\n minimum value is = %d",min);
	printf("\n maximum value is = %d",max);
	return 0;
}
