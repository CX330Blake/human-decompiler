int main(void)
{
	int encoded[] = { 70,  69,  68,	 75,  120, 115, 112, 52,  59,  96,
			  104, 88,  102, 109, 54,  101, 108, 98,  98,  51,
			  116, 88,  81,	 61,  109, 116, 44,  113, 104, 51,
			  95,  108, 122, 61,  119, 99,	97,  36,  113 };

	for (int index = 0; index < 39; index++) {
		switch (index % 5) {
		case 0:
			break;
		case 1:
			encoded[index] += 7;
			break;
		case 2:
			encoded[index] -= 3;
			break;
		case 3:
			encoded[index] ^= 12;
			break;
		case 4:
			encoded[index] ^= 3;
			break;
		}
	}

	return 0;
}
