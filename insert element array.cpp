#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,60},index_value,i,new_value;
	printf("\n original array values are");
	for(i=0;i<5;i++)
	{
		printf("\t %d",arr[i]);
	}
	printf("\n choose the index value between 0 to 4");
	scanf("%d",&index_value);
	printf("\n enter new value:");
	scanf("%d",new_value);
	arr[index_value]=new_value;
	printf("\n after modification array value are");
	for(i=0;i<5;i++)
	{
		printf("\t %d",arr[i]);
	}
	return 0;
}
