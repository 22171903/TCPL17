#include <stdio.h>
#include <math.h>

int main()
{
   double r1,p1,r2,p2,a,b;   
   scanf("%lf%lf%lf%lf",&r1,&p1,&r2,&p2);
   a=r1*cos(p1)*r2*cos(p2)-r1*sin(p1)*r2*sin(p2);
   b=r1*cos(p1)*r2*sin(p2)+r1*sin(p1)*r2*cos(p2);
   if (fabs(a)<1e-2 && fabs(b)<1e-2) printf("0");
   else 
   if (fabs(a)>=1e-2)
   if (fabs(b)<1e-2) printf("%.2f+0.00i\n",a);
   else printf("%.2f%+.2fi\n",a,b);
   else printf("0.00%+.2fi\n",b);
   return 0;
}
