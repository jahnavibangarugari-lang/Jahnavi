#include<stdio.h>
int biggest();
int main()
{
	int big;
	big=biggest();
	printf("%d",big);
	return 0;
}
int biggest()
{
int a,b,c;
printf("\n enter a,b & c values");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
printf("\n b is big");
else if(b>c)
printf("\n b is big");
else
printf("\n c is big");
return a;
}
