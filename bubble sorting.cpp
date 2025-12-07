#include <stdio.h>
int main()
{
	int arr[200],n,i,j,temp;
	printf("\n enter n value");
	scanf("%d",&n);
	printf("\n enter %d elements in an array",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
		for(i=0;i<n-1;i++)
		{
			for (j=0;j<n-1-i;j++)
			{
				if(arr[j]>arr[j+1])
				{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
		printf("\n after sorting");
		for (i=0;i<n;i++)
		{
			printf("\t %d",arr[i]);
		}
		return 0;
}
