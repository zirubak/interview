//1.3 Design an algorithm and write code to remove the duplicate characters in a string without using any additional buffer.
//NOTE: One or two additional variables are fine. An extra copy of the array is not.
//FOLLOW UP Write the test cases for this method.

//reference solution
//http://cs-technotes.blogspot.com/2010/11/remove-duplicate-characters-in-string.html

/*if don't use extra buffer or extra data structure. two methods: 1, sort the array in place, then scan, time complexity is O(nlogn) 2,
 * for each character,check whether it's met before. time complexity = O(n^2). Here I implement method 2*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h> // to use bool type in C

char* inplaceRemoveDups(char* s)
{
	if(!s) return NULL;

	int len = strlen(s);
	int p, q, idx = -1;

	for(p = 0; p < len; p++)
	{
		char tmp = s[p];
		bool flag = true;

		for(q = 0; q < p; q++)
		{
			if(s[q] == tmp)
			{
				flag = false;
				break;
			}
		}
		if(flag)
			s[++idx] = s[q];
	}

	s[++idx] = '\0';

	return s;
}

int main(void)
{
	char test[] = "1112232";
	char* rtn = NULL;

	rtn = inplaceRemoveDups(test);

	printf("%s", rtn);

	return 0;
}




