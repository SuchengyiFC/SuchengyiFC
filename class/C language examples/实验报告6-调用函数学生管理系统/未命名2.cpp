#include <stdio.h>
int main()
{	float average(float array[],int n);
	float score1[5]={98.5,97,91.5,60,55};	//���峤��Ϊ5������
	float score2[10]={67.5,89.5,99,69.5,77,89.5,76.5,54,60,99.5};
	//���峤��Ϊ10������
	printf("1��ƽ���ɼ��ǣ�%6.2f\n",average(score1,5));
	//��������score1��5��ʵ��
	printf("2��ƽ���ɼ��ǣ� %6.2f\n",average(score2,10));
	//��������score2��10��ʵ��
	return 0;
}

float average(float array[],int n) //����average������δָ���β����鳤��
{	int i;
	float aver,sum=array[0];
	for(i=1;i<n;i++)
		sum=sum+array[i];	    //�ۼ�n��ѧ���ɼ�
	aver=sum/n;
	return(aver);
}