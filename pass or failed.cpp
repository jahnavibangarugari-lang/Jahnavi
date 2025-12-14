#include <stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
    if(sub1>=35 && sub2>=35 && sub3>=35 && sub4>=35 && sub5>=35)
    printf("PASSED");
    else
    printf("FAILED");
    return 0;
}
