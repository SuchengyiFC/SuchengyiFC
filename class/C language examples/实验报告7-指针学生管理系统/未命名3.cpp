#include <stdio.h>
float *search(float (*pointer)[4],int n)
//形参pointer是指向一维数组的指针变量
{	float *pt;
	pt=*(pointer+(n-1));	//pt的值是&score[k][0]
	return(pt);
}
int main()
{	float score[3][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};	
	//定义数组，存放成绩
	//float *search(float (*pointer)[4],int n);	//函数声明
	float *p;
	int i,k;
	printf("请输入要查找学生的序号:");
	scanf("%d",&k);	//输入要找的学生的序号
	p=search(score,k);	//调用search函数，返回score[k][0]的地址
	printf("序号为No.%d的成绩是:\n",k);
	for(i=0;i<4;i++)
		printf("%5.2f\t",*(p+i));	//输出score[k][0]~score[k][3]的值
	printf("\n");
	return 0;
}

