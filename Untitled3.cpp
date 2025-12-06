#include <stdio.h>
int main()
{
	int a[100];
	int *ptr1,*ptr2;
	ptr1=&a[0];
	ptr2=&a[2];
	int d=ptr2-ptr1;
	int d2=ptr1-ptr2;
	printf("\n %d",d);
	printf("\n %d",d2);
	ptr2=ptr2-1;
		printf("\n ptr2 pointing value= %d",*(ptr1));
	return 0;
}
