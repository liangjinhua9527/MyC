#include <m211117.h>

void tempConvert(void)
{
	double huaShiDu = 0.0,sheShidu = 0.0;
	scanf("%lf",&huaShiDu);
	sheShidu = 5*(huaShiDu - 32)/9; 
	printf("sheShidu = %.2lf",sheShidu);
}
