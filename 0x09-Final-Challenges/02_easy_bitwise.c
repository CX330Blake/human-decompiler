int main(void)
{
	int encoded[] = { 5,  75, 2,  64, 56, 104, 43,	111, 43,  88, 20, 55,
			  52, 88, 58, 55, 54, 88,  119, 85,  112, 88, 34, 88,
			  33, 54, 55, 88, 20, 54,  118, 66,  98,  122 };

	encoded[0] ^= 67;
	encoded[1] ^= 7;
	encoded[2] ^= 67;
	encoded[3] ^= 7;
	encoded[4] ^= 67;
	encoded[5] ^= 7;
	encoded[6] ^= 67;
	encoded[7] ^= 7;
	encoded[8] ^= 67;
	encoded[9] ^= 7;
	encoded[10] ^= 67;
	encoded[11] ^= 7;
	encoded[12] ^= 67;
	encoded[13] ^= 7;
	encoded[14] ^= 67;
	encoded[15] ^= 7;
	encoded[16] ^= 67;
	encoded[17] ^= 7;
	encoded[18] ^= 67;
	encoded[19] ^= 7;
	encoded[20] ^= 67;
	encoded[21] ^= 7;
	encoded[22] ^= 67;
	encoded[23] ^= 7;
	encoded[24] ^= 67;
	encoded[25] ^= 7;
	encoded[26] ^= 67;
	encoded[27] ^= 7;
	encoded[28] ^= 67;
	encoded[29] ^= 7;
	encoded[30] ^= 67;
	encoded[31] ^= 7;
	encoded[32] ^= 67;
	encoded[33] ^= 7;

	return 0;
}
