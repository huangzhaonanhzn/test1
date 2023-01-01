#include <stdio.h>
int main()
{
	int temp[5] = {1, 2, 3, 4, 5};
	int (*p)[5];
	p=&temp;
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("%d\n", *(*p + i));
		//Лђеп printf("%d\n", (*p)[i]);
	 } 
	 return 0;
}

