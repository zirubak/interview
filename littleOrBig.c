// how to device whether given process using little endian format or big endian format?

#include <stdio.h>

int main(void)
{
	unsigned int a = 1;
	char* p;

	p = (char*)&a;

	if(p == 1)
	{
		printf("little endian \n");
	}
	else
	{
		printf("big endian\n");
	}

	return 0;
}
