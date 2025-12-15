#include <stdio.h>
int main()
{
    int D,years,weeks;
    scanf("%d",&D);
    years = D/365;
    weeks = (D%365)/7;
    printf("%d%d",years,weeks);
    return 0;
}
