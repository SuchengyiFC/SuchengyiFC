#include <stdio.h>
#include <string.h>
main()
{
	char str1[50],str2[10];
	int d;
	gets(str1);
	gets(str2);
   d=strcmp(str1,str2);//×Ö·û´®±È½Ï 
	printf("%d",d);
} 