#ifndef BIT_OPERATE
#define BIT_OPERATE
#include <stdio.h>
int clear_bit(int num, int bit);
int	get_bit(int num, int bit);
int	set_bit(int num, int bit);
int	toggle_bit(int num, int bit);
int	count_bits(unsigned int num);
int	get_max_bits(int *arr, size_t size);
int	is_even(int num);
int	is_power_of_two(unsigned int n);
unsigned int clear_lowest_one_bit(unsigned int n);
#endif//BIT_OPERATE
