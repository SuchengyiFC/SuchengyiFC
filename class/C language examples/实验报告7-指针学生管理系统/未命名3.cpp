#include <stdio.h>
float *search(float (*pointer)[4],int n)
//�β�pointer��ָ��һά�����ָ�����
{	float *pt;
	pt=*(pointer+(n-1));	//pt��ֵ��&score[k][0]
	return(pt);
}
int main()
{	float score[3][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};	
	//�������飬��ųɼ�
	//float *search(float (*pointer)[4],int n);	//��������
	float *p;
	int i,k;
	printf("������Ҫ����ѧ�������:");
	scanf("%d",&k);	//����Ҫ�ҵ�ѧ�������
	p=search(score,k);	//����search����������score[k][0]�ĵ�ַ
	printf("���ΪNo.%d�ĳɼ���:\n",k);
	for(i=0;i<4;i++)
		printf("%5.2f\t",*(p+i));	//���score[k][0]~score[k][3]��ֵ
	printf("\n");
	return 0;
}

