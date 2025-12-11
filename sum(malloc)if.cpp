#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,sum=0;
	int *ptr;
    printf("\n enter n size");
    scanf("%d",&n);
   ptr = (int*)malloc(n * sizeof(int));
    if (ptr==0)
    {
    	printf("Memory allocation failed");
    	return 1;
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
		sum+=ptr[i];
	}
	printf("%d",sum);
	free(ptr);
	return 0;
}
