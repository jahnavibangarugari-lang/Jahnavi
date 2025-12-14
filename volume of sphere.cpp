#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{
   double r,volume;
   scanf("%lf",&r);
   volume=(4.0/3.0)*pi*pow(r,3);
   printf("%.2f",volume);
   return 0;

}
