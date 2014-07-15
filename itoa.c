//http://en.wikibooks.org/wiki/C_Programming/C_Reference/stdlib.h/itoa

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char* string)
{
	int i = 0;
	int j = strlen(string)-1;
	char c;

	for(i = 0; i < j; i++, j--)
	{
		c = string[i];
		string[i] = string[j];
		string[j] = c;
	}
}

// itoa: convert integer n to characters in s
void itoa(int n, char* s)
{
	int i = 0;
	int sign = 0;

	//record sign
	if((sign = n) < 0)
	{
		//make n positive
		n = -n;
	}

	do{
		//generate digits in reverse order
		s[i++] = n % 10 + '0'; // get next digit
	}while((n /= 10) > 0);

	if(sign < 0)
	{
		s[i++] = '-';
	}

	s[i] = '\0';

	reverse(s);
}

int main(void)
{
	char* string;
	int input = -123456789;

	string = (char*)malloc(sizeof(int));

	itoa(input, string);

	printf("%s", string);

	return 0;
}
