union Student {
	int year;
	int id;
};

int main(void)
{
	union Student data;
	data.year = 2026;
	data.id = 1;
	return 0;
}
