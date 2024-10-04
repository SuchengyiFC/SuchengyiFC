#include<stdio.h>
#include<math.h>		//程序中要调用求平方根函数sqrt
int main() 
{	double a,b,c,t,x1,x2,p,q;	  
	scanf("%lf,%lf,%lf",&a,&b,&c);	//输入双精度浮点型变量的值要用格式声明"%lf"  
	p=-b/(2*a);
	t=b*b-4*a*c;//t是判别式sqrt(b*b-4ac)
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
	printf("次方程无根\n");	//输出“此方程无实根”
	return 0;
}