#include <stdio.h>

void triangle_judge(int a, int b, int c);
int main(void)
{
  int a, b, c;

  printf("please input three number:\n");
  scanf("%d%d%d", &a, &b, &c);
  triangle_judge(a, b, c);

  return 0;
}

void triangle_judge(int a, int b, int c)
{
   if (a+b>c && a+c>b && b+c>a)
   {
      if (a==b && b==c && c==a) printf("等边三角形\n");
        else if (a==b || b==c || a==c) printf("等腰三角形\n");
          else printf("普通三角形\n");
   }
   else printf("不能构成三角形!\n");
}
