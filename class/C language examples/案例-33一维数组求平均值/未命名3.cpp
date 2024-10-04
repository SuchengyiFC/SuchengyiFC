#include <stdlib.h>
#include <stdio.h>
int main()
{
	int i;
	float a[10];
	float s=0,ave;
	for(i=0;i<=9;i++)
	{scanf("%f",&a[i]);
	s=s+a[i];
	}
	ave=s/10;
	printf("s=%.2f,av=%.2f",s,ave);
} 