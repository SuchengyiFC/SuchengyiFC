#include <stdio.h>
#include<math.h>						//������Ҫ������ƽ��������sqrt
int main() 
{	double a,b,c,disc,x1,x2,p,q;			//disc��������б�ʽ(b��b-4ac)��ֵ
	scanf("%lf%lf%lf",&a,&b,&c);			//����˫�����ͱ�����ֵҪ�ø�ʽ������%lf��
	disc=b*b-4*a*c;
	p=-b/(2*a);//���ϵ�������ͣ�����λ����С�������2.0ת�� 
	printf("p=%lf\n",p); 
	q=sqrt(disc)/(2.0*a);
	x1=p+q;
    x2=p-q; 					//������̵�������
	printf("x1=%7.2f\nx2=%7.2f\n",x1,x2);	//������̵�������
	return 0;
}