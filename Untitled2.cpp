#include <stdio.h>
int main()
{
	int a[100],n,i;
	int *ptr;
	ptr=a;
	printf("enter n size");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
	scanf("\n %d",(ptr+i));
	}
	for (i=0;i<n;i++)
	{
		printf("\n %d",*(ptr+i));
	}
	return 0;
}
