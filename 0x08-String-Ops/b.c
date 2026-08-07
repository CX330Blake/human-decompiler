#include <string.h>
#include <stdio.h>

int strcmp_func(char *str)
{
	if (strcmp(str, "CX330") == 0) {
		return 1;
	}
	return 0;
}

int main()
{
	char name[] = "CX331";
	int flag;
	flag = strcmp_func(name);
	if (flag == 1) {
		printf("Hey CX330!\n");
	}
	return 0;
}
