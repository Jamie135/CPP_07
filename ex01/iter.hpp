#pragma once

# include <iostream>

template <typename T>
void	iter(const T *addr, size_t size, void (*ft)(T const&))
{
	if (!addr || !ft)
		return ;
	for (size_t i = 0; i < size; i++)
		ft(addr[i]);
}
