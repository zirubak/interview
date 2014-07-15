
// compiler error.
// p is a pointer to a "constant integer." but this code tried to change the value of
// the "constant integer."

#include <stdio.h>

int main()
{
	int const* p = 5;

	printf("%d \n", ++(*p));

   return 0;
}
