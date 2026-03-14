#include <stdio.h>

int	set_bit(int num, int bit)
{
	return (num | (1 << bit));
}

int main(void)
{
	for (size_t i = 0; i < 4; ++i)
		printf("1<<i=%i, %b\n", 1<<i,set_bit(8, i));
}

