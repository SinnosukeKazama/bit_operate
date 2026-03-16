#include "bit_operate.h"

int	get_max_bits(int *arr, size_t size)
{
	int max = 0;
	size_t i = 0;
	int bits = 0;
	while (i < size)
	{
		if (max < arr[i])
			max = arr[i];
		++i;
	}
	//maxをbitsだけ右ビットシフト。
	//maxが0になるまでbitインクリメント。
	//ver0
	/*
	while (max >> bits)
		++bits;
		*/
	//ver1
	while(max)
	{
		bits++;
		max >>= 1;
	}
	return(bits);
}
/*
#define SZ_ARR 4
int main(void)
{
	int a[] = {1,100,7,8};
	printf("%i\n",get_max_bits(a,SZ_ARR));
}*/
