#include<stdio.h>
#include<math.h>		//������Ҫ������ƽ��������sqrt
int main() 
{	double a,b,c,t,x1,x2,p,q;	  
	scanf("%lf,%lf,%lf",&a,&b,&c);	//����˫���ȸ����ͱ�����ֵҪ�ø�ʽ����"%lf"  
	p=-b/(2*a);
	t=b*b-4*a*c;//t���б�ʽsqrt(b*b-4ac)
	if(t>0) 
	{
    q=sqrt(t)/(2*a);
	x1=p+q;
	x2=p-q;
	printf("x1=%.2lf,x2=%.2lf",x1,x2);
	}				
	if(t==0) 
	{x1=x2=p;
	printf("x1=x2=%.2lf",p);
	}
	else 
	printf("�η����޸�\n");	//������˷�����ʵ����
	return 0;
}