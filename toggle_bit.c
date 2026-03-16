#include "bit_operate.h"

int	toggle_bit(int num, int bit)
{
	return (num ^ (1 << bit));
}
/*
int main(void)
{
	for (size_t i=0; i < 4; ++i)
		printf("%b\n",toggle_bit(10, i));
}*/
