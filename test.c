
#include <stdio.h>

int main()
{
	struct xx
	{
		int x;
		char name[];
	};

	struct xx *s = (struct xx*)malloc(sizeof(struct xx));
	s->x = 10;
	strcpy(s->name, "hi");

	printf("%d\n",s->x);
	printf("%s\n",s->name);

	return 0;
}
