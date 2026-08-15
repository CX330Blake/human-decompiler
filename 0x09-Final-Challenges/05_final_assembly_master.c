void add_value(int *p_num, int amount)
{
	*p_num += amount;
}

void xor_value(int *p_num, int key)
{
	*p_num ^= key;
}

int main(void)
{
	int encoded[] = { 66,  83,  114, 70,  42,  67,  55,  3,   38,
			  92,  44,  75,  108, 101, 87,  94,  102, 106,
			  60,  13,  91,  72,  65,  38,  -14, 106, 55,
			  68,  65,  23,  106, 102, 7,   80,  4,   97,
			  116, 81,  76,  18,  117, 102, 94,  25,  -6,
			  51,  123, 86,  64,  -10, 110, 132 };

	for (int index = 0; index < 52; index++) {
		switch (index % 5) {
		case 0:
			add_value(&encoded[index], 4);
			break;
		case 1:
			add_value(&encoded[index], -7);
			break;
		case 2:
			xor_value(&encoded[index], 0x33);
			break;
		case 3:
			xor_value(&encoded[index], index);
			add_value(&encoded[index], 2);
			break;
		case 4:
			add_value(&encoded[index], index);
			xor_value(&encoded[index], 0x55);
			break;
		}
	}

	return 0;
}
