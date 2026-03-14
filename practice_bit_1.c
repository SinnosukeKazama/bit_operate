#include <stdio.h>

int	get_bit(int num, int bit)
{
	return ((num >> bit) & 1);
}

int main(void)
{
	printf("%i\n",get_bit(10, 0));
	printf("%i\n",get_bit(10, 1));
	printf("%i\n",get_bit(10, 2));
	printf("%i\n",get_bit(10, 3));
}
