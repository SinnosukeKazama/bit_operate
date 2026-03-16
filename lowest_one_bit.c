#include "bit_operate.h"

unsigned int	lowest_one_bit(unsigned int n)
{
	//my A
	/*
	unsigned int shift = 0;
	if (!n)
		return (0);
	while (((n >> shift) & 1) == 0)
		shift++;
	return (1 << shift);
	*/
	//hack A
	return (n & -n);
}

int main(void)
{
/*	for (unsigned int i = 0; i<20; ++i)
	       	printf("i=%b, rt=%b\n",i,lowest_one_bit(i));
		*/
	for (unsigned int n=0;n <20; n++)
		printf("n=%b, -n=%b\n",n,-n);
}

/*
n = 12
1100

while---
bits=0
n>>bits =1100

bits=1
n>>bits =110

bits=2
n>>bits =11
??
-------------------------



rt=100
*/
