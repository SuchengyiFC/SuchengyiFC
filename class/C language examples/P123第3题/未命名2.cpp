#include <stdio.h>
main()
{
int score;
printf("������һ��ѧ���ĳɼ�:");
scanf("%d",&score);	
switch(score/10)
{
	case 10:
	printf("��ѧ���ɼ���Ӧ�ĵȼ���:A\n");break;
	case 9:
	printf("��ѧ���ɼ���Ӧ�ĵȼ���:B\n");break;
	case 8:
	printf("��ѧ���ɼ���Ӧ�ĵȼ���:C\n");break;
	case 7:
	printf("��ѧ���ɼ���Ӧ�ĵȼ���:D\n");break;
	case 6:
	printf("��ѧ���ɼ���Ӧ�ĵȼ���:E\n");break;
	default:printf("��ѧ���ɼ���Ӧ�ĵȼ���:F\n");
}
} 