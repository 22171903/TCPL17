#include <stdio.h>
int main()
{
	int n;
	printf("请输入一个整数：");
	scanf("%d",&n);

	int x;
	if(n<0)
	  {
		printf("fu ");
		x=-n;
	  }

	int mask,t;
	for(mask=1,t=x;t>9;)
	   {
		t/=10;
		mask*=10;
	   }

	int d;
	for(;mask>0;)
	   {
		
		d=x/mask;
		switch(d){
		   case 0:printf("ling");break;
	           case 1:printf("yi");break;
		   case 2:printf("er");break;
		   case 3:printf("san");break;
		   case 4:printf("si");break;
		   case 5:printf("wu");break;
		   case 6:printf("liu");break;
		   case 7:printf("qi");break;
		   case 8:printf("ba");break;
		   case 9:printf("jiu");break;
	   }

		if(mask>9) printf(" ");
		x%=mask;
		mask/=10;
	   }

	printf("\n");
	return 0;
}
