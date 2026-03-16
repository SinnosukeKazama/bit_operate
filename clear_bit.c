#include "bit_operate.h"

int clear_bit(int num, int bit)
{
	return (num & ~(1 << bit));
}
/*
int main(void)
{
	for(size_t i=0; i<4; ++i)
		printf("%i, rt=%b\n", i,clear_bit(11,i));
}*/
