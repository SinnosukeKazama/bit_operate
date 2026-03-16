#include "bit_operate.h"

int	count_bits(unsigned int num)
{
	/*Var0
	int count = 0;
	while (num > 0)
	{
		if (num & 1)
			++count;
		num >>= 1;
	}
	return(count);
	*/
	//Ver1
	int count = 0;
	while (num)
	{
		num &= (num - 1);
		++count;
	}
	return (count);
}
/*
int main(void)
{
	for(int num = 0; num < 20; ++num)
		printf("bin=%b, rt=%i\n",num,count_bits(num));
}*/
