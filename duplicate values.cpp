#include <stdio.h>
int main()
{
	int arr[1000],n,i,j,found=0;
	printf("\n enter array size:");
	scanf("%d",&n);
	printf("\n enter %d elemts in the array:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n duplicate elements in the array is");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("%4d",arr[i]);
				found=1;
				break;
			}
		}
	}
	if(found==0)
	{
		printf("\n no duplicates are found");
	}
	return 0;
}
