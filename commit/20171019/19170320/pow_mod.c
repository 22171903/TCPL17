#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,x;
    printf("请输入a,b,c:");
    scanf("%d,%d,%d",&a,&b,&c);
    x=pow(a,b);
    printf("%d\n",x%c);

    return 0;
}
