#include <stdio.h>
int main()
{
    int a,b,c;

    for(a=2,b=1,c=1;a<=10;a++)
    {
       b*=a;
       c+=b;
    }
   
    printf("c=%d\n",c);
    
    return 0;
}
