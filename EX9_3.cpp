#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fun(char*,FILE*);
int main()
{
	char str[100] ;
	FILE* fp = fopen("EX9_3.txt", "w");
	printf("ÇëÊäÈë×Ö·û´®£º");
	gets(str);
	fun(str,fp);
	return 0;
}
void fun(char*str,FILE*fp)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]<='z'&&str[i]>='a')
			str[i]-=32;
		fputc(str[i], fp);
	}
	fclose(fp);
}
