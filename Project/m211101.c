#include <m211101.h>

 void maxValue(void)
{
	int a,b,c;
	printf("请输入三个整数!\n");
	scanf("%d %d %d",&a,&b,&c);
	
	printf("that max is %d\n",c > (a > b ? a : b) ? c : (a > b ? a : b)) ;
	
}


