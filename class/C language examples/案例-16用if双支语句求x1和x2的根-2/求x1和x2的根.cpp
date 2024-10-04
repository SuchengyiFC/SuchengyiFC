#include<stdio.h>
#include<math.h>		//程序中要调用求平方根函数sqrt
int main() 
{	double a,b,c,t,x1,x2,p,q;	//disc是判别式sqrt(b*b-4ac)  
	scanf("%lf,%lf,%lf",&a,&b,&c);	//输入双精度浮点型变量的值要用格式声明"%lf"  
	t=b*b-4*a*c;
	if(t<0)					//若b*b-4ac<0
		printf("次方程无根\n");	//输出“此方程无实根”
	else						//b*b-4ac≥0
	{	p=-b/(2*a);
		q=sqrt(t)/(2*a);
		x1=p+q;
		x2=p-q;		//求出方程的两个根  
		printf("x1=%7.2f,x2=%7.2f\n",x1,x2);	//输出方程的两个根  
	}
	return 0;
}