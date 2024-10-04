#include <stdio.h>
main()
{
	int a,b;
	int *p1,*p2;
	scanf("%d,%d",&a,&b);
	p1=&a;
	p2=&b;
	//*p1=5;printf("%d,%d",a,*p2);
	printf("%d,%d",*p1,*p2);
} 