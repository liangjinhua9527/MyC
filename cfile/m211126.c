#include <m211126.h>

/*========================================
给出一百分制成绩，要求输出成绩等级‘A’、‘B’、‘C’、‘D’、‘E’。 
90分以及90分以上为A，80-89分为B，70-79分为C，60-69分为D，60分以下为E。
一个整数0－100以内
========================================*/

 void judgeGrade(void)
 {
 	int x;

 	printf("please input value!!\n");
 	
 	scanf("%d",&x);
 	
 	switch(x/10)
 	{
 		case 10 :
 		case 9 :
			printf("A\n");
			break;
		case 8 :
			printf("B\n");
			break;
 		case 7 :
			printf("C\n");
			break;
		case 6 :
			printf("D\n");
			break;
		default :
		printf("E\n");
	 }

 }
 
