#include <stdio.h>
#include <math.h>
int main()
{
    double P, R, T;
    scanf("%lf %lf %lf", &P, &R, &T);
    double A = P * pow((1 + R / 100), T);
    double CI = A - P;
    printf("%.2lf", CI);
    return 0;
}
