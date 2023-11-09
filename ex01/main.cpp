#include "Iter.hpp"

template < typename T>
void	display(const T &a) {std::cout << a << "; ";}

int	main()
{
	int int_array[] = {7, 8, 6, 9, 1};
	double double_array[] = {7.0, 8.0, 6.0, 9.0, 1.0};
	float float_array[] = {1.5f, 2.5f, 3.5f};
	std::string str_array[] = {"Isn't", "it", "cool", "bro", "."};

	iter(int_array, 5, display);
	std::cout << std::endl;

	iter(double_array, 5, display);
	std::cout << std::endl;

	iter(float_array, 3, display);
	std::cout << std::endl;

	iter(str_array, 5, display);
	std::cout << std::endl;
}
