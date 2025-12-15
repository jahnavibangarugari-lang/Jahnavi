#include <stdio.h>
int main()
{
    float base1, base2, height;
    scanf("%f", &base1);
    scanf("%f", &base2);
    scanf("%f", &height);
    float area = ((base1 + base2) * height) /
    2;
    printf("%.4f", area);
    return 0;
}
