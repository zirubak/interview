//http://www.geeksforgeeks.org/write-your-own-atoi/
//
//The atoi() function takes a string (which represents an integer) as an argument and returns its value.
//
//Following is a simple implementation. We initialize result as 0. We start from the first character and update result for every character.

#include <stdio.h>

// simple atoi() function
int myAtoI(char* str)
{
	int res = 0; // initialize result
	int i = 0;

	for(i = 0; str[i] != '\0'; ++i)
	{
		res = res * 10 + str[i] -'0';
	}

	return res;
}

int main()
{
	char *str = "89789";
	int val = myAtoI(str);
	printf("%d", val);

	return 0;
}
