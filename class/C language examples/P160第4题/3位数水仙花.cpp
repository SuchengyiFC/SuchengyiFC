#include <stdio.h>
main()
{
	int i,x1,x2,x3;
	for(i=100;i<=999;i++)
	{
		x1=i/100;
		x2=(i/10)%10;
		x3=i%10;
		if(i==x1*x1*x1+x2*x2*x2+x3*x3*x3)
		printf("��λˮ�ɻ���Ϊ��%d\n",i);
	}
} 