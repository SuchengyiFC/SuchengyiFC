#include <stdio.h>
#include <stdlib.h>
int main()
{system("color e0");//设置背景为亮白色，前景为黑色 
	int x,y,z;
	x=10;y=15;
	//z=x=y;
	//scanf("%3d%2d%2d",&x,&y,&z);//支持
	 //scanf("%3d,%2d",&x,&y);//不支持
	printf("z=%d",x+y);
	return 0;

}
