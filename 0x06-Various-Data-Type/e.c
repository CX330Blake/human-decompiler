#include <stdio.h>

struct Student {
	int year;
	int id;
};

void my_func(struct Student n)
{
	printf("id=%d\n", n.id);
}

int main(void)
{
	struct Student data;
	data.year = 2026;
	data.id = 1;
	my_func(data);
	return 0;
}
