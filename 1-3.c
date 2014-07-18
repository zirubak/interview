//1.3 Design an algorithm and write code to remove the duplicate characters in a string without using any additional buffer.
//NOTE: One or two additional variables are fine. An extra copy of the array is not.
//FOLLOW UP Write the test cases for this method.

//reference solution
//coding interview page 97

#include <stdio.h>
#include <string.h>
#include <stdbool.h> // to use bool type in C

char* inplaceRemoveDups(char* s)
{
	char* err = "Error";
	if(s == NULL) return err;

	int len = strlen(s);
	if(len < 2) return err;

	int tail = 1;
	int i = 0;

	for(i = 1; i < len; ++i)
	{
		int j;
		for(j = 0; j < tail; ++j)
		{
			if(s[i] == s[j])
				break;
		}
		if(j == tail)
		{
			s[tail] = s[i];
			++tail;
		}
	}
	s[tail] = '\0';

	return s;
}

int main(void)
{
	char test[] = "aaabbb";
	char* rtn = NULL;

	rtn = inplaceRemoveDups(test);

	printf("%s", rtn);

	return 0;
}




