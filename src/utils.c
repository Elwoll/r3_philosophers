//
// Created by Lowell Zima on 8/8/22.
//
#include "../includes/philosophers.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (c);
	return (0);
}

int	mem_check(void *ptr)
{
	if (ptr == NULL)
		return (1);
	return (0);
}

long	ft_atol(const char *str)
{
	int		i;
	long	res;
	int		minus;

	minus = 1;
	i = 0;
	res = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		minus = -1;
		i++;
	}
	if (str[i] == '+' && minus == 1)
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	return (res * minus);
}

void    *ft_calloc(size_t count, size_t size)
{
	char    *memoryallocation;

	memoryallocation = malloc(count * size);
	if (memoryallocation == NULL)
		return (memoryallocation);
	ft_memset(memoryallocation, 0, count * size);
	return (memoryallocation);
}

void    *ft_memset(void *b, int c, size_t len)
{
	size_t                  i;
	unsigned char   *btab;

	btab = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		btab[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
