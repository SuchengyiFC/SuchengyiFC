#include <stdio.h>
main()
{
int score;
printf("请输入一个学生的成绩:");
scanf("%d",&score);	
switch(score/10)
{
	case 10:
	printf("该学生成绩对应的等级是:A\n");break;
	case 9:
	printf("该学生成绩对应的等级是:B\n");break;
	case 8:
	printf("该学生成绩对应的等级是:C\n");break;
	case 7:
	printf("该学生成绩对应的等级是:D\n");break;
	case 6:
	printf("该学生成绩对应的等级是:E\n");break;
	default:printf("该学生成绩对应的等级是:F\n");
}
} 