//1.1 Implement an algorithm to determine if a string has all unique characters. What if you can not use additional data structures?

#include <stdio.h>
#include <stdbool.h>

//using bit operation to check
int is_uniq_using_big_operation(char *str)
{
    int i = 0, flag = 0, value = 0;

    for(i = 0; i < strlen(str); i++)
    {
        value = str[i] - 'a';
        if(flag & (1 << value)) {
        	printf("String is not unique!! \n");
            return false;
        }
        flag |= (1 << value);
    }
    printf("String is unique!! \n");
    return true;
}

bool is_unique_string(char* p)
{
	int ascii[256] = {0,};

	if(!p)
	{
		printf("ERROR! \n");
		return false;
	}

	while(*p != '\0')
	{
		if(ascii[*p] == 0)
		{
			ascii[*p] = 1;
			p++;
		}
		else
		{
			printf("String is not unique!! \n");
			return false;
		}
	}

	printf("String is unique!! \n");
	return true;
}

int main(void)
{
	char* test = "abx";
	bool rtn = false;

	rtn = is_unique_string(test);

	rtn = is_uniq_using_big_operation(test);

	return 0;
}
