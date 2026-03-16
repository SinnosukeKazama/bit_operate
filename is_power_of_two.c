#include "bit_operate.h"
int	is_power_of_two(unsigned int n)
{
	return (n && !(n & (n - 1)));
}
/*
int main(void)
{
	for(int n=0;n < 20;n++)
		printf("%i, rt=%i\n",n,is_power_of_two(n));
}*/
