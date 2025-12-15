#include <stdio.h>
int main()
{
    int side;
    scanf("%d", &side);
    int surfaceArea = 6 * side * side;
    long long volume = (long long)side * side * side;
    printf("Surface area = %d and Volume = %lld", surfaceArea, volume);
    return 0;
}
