#include <m211126.h>

/*========================================
����һ�ٷ��Ƴɼ���Ҫ������ɼ��ȼ���A������B������C������D������E���� 
90���Լ�90������ΪA��80-89��ΪB��70-79��ΪC��60-69��ΪD��60������ΪE��
һ������0��100����
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
 
