#include "bit_operate.h"

unsigned int clear_lowest_one_bit(unsigned int n)
{
	return (n & (n - 1));
}
/*
int main(void)
{
	for(unsigned int i = 0; i < 20; i++)
		printf("i=%b, rt=%b\n", i, clear_lowest_one_bit(i));
}*/
