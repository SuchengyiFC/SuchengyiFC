#include<stdio.h>
#include<math.h>		//������Ҫ������ƽ��������sqrt
int main() 
{	double a,b,c,t,x1,x2,p,q;	//disc���б�ʽsqrt(b*b-4ac)  
	scanf("%lf,%lf,%lf",&a,&b,&c);	//����˫���ȸ����ͱ�����ֵҪ�ø�ʽ����"%lf"  
	p=-b/(2*a);
	t=b*b-4*a*c;
	if(t<0)					//��b*b-4ac<0
		printf("�η����޸�\n");	//������˷�����ʵ����
	if(t==0) 
	{x1=x2=p;
	printf("x1=x2=%.2lf",p);
	}
	if(t>0) 
	{
    q=sqrt(t)/(2*a);
	x1=p+q;
	x2=p-q;
	printf("x1=%.2lf,x2=%.2lf",x1,x2);
	}
	return 0;
}