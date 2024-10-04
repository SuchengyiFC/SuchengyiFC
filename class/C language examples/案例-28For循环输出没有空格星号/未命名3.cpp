 #include <stdio.h>
#include <stdlib.h>
int main()
{system("color f0");//设置背景为亮白色，前景为黑色 
	int i,j;
	for(i=1;i<=5;i++)
	 {for(j=1;j<=i;j++)
	    printf("*");
	    printf("\n");
	 }
system("pause");
	return 0;
}
