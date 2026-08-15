void func_a(int *p_num)
{
	*p_num -= 5;
}

void func_b(int *p_num)
{
	*p_num += 7;
}

int main(void)
{
	int encoded[] = { 75,  69,  58,	 76,  116, 107, 105, 98,  88,  119,
			  108, 98,  100, 107, 93,  125, 88,  107, 104, 113,
			  88,  119, 49,	 88,  119, 50,	88,  102, 101, 112,
			  102, 114, 108, 100, 107, 94,	114, 94,  102, 103,
			  94,  107, 100, 98,  109, 130 };

	for (int index = 0; index < 46; index++) {
		if (index % 3 == 0)
			func_a(&encoded[index]);
		else
			func_b(&encoded[index]);
	}

	return 0;
}
