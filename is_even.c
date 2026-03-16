#include "bit_operate.h"

int	is_even(int num)
{
	return (!(num & 1));
}
/*
int main(void)
{
	for(int num = 0;num < 100; ++num)
		printf("%i, rt=%i\n", num, is_even(num));
}*/
