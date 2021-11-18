#include <m211118.h>

 void maxValues(void)
{
	int a,b,c,d;
	printf("please input three int number?\n");
	scanf("%d,%d,%d",&a,&b,&c);
	d = (a >= b? a:b);
	d = d> c? d:c;
	
	printf("The maximal value is %d\n",d);
}
