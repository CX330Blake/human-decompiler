int my_func(int a, int b)
{
	return a + b;
}

int main(void)
{
	int (*p_func)(int, int);
	p_func = my_func;
	int n = (*p_func)(123, 456);
	return 0;
}
