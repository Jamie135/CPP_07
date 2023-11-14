#pragma once

# include <iostream>
# define RED	"\033[31m"
# define GREEN	"\033[32m"
# define END	"\033[0m"

template <typename T, typename S>
void	iter(T *addr, size_t size, S (*ft))
{
	if (!addr || !ft)
		return ;
	for (size_t i = 0; i < size; i++)
		ft(addr[i]);
}

template <typename T>
void ft_dec(T &e)
{
	e--;
}
