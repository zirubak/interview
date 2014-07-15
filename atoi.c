//http://www.careercup.com/question?id=7837664
//
//implement atoi function.
//
//here it is in C. it handles leading whitespaces & trailing whitespaces.
//if characters are found in between numbers, it ignores them.
//it allows negative numbers,
//and it detects buffer overflows.

#include <stdio.h>

int my_atoi(char* string)
{
	int negative = 0;
	int value = 0;
	char* start;

	if(string == NULL)	// if data passed in is null
		return 0;

	start = string;

	while(*start == ' ')	//ignore pre-white space
		start++;

	if(*start == '-')
	{
		negative = 1;
		start++;
	}

	while(*start != '\0')
	{
		//numeric characters
		if(*start >= '0' && *start <= '9')
		{
			//check for + buffer overflow
			if(negative == 0 && value * 10 + ((int)*start) - '0' < value)
			{
				printf("buffer overflow \n");
				return 0;
			}

			//check for - buffer overflow
			if(negative == 1 && ((-value) * 10) - ((int)*start - '0') > -value)
			{
				printf("buffer overflow \n");
				return 0;
			}

			value = value * 10 + ((int)*start - '0');
		}

		start++;
	}

	if(negative)
		value = -value;

	return value;
}


int main(void)
{
	int rtn = 0;
	char* string = "    1234ab56789";
	rtn = my_atoi(string);
	printf("%d \n", rtn);

	return 0;
}
