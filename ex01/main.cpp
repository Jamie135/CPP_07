#include "Iter.hpp"

int	main()
{
	int int_array[] = {7, 8, 6, 9, 0};
	double double_array[] = {7.0, 8.0, 6.0, 9.0, 1.0};
	float float_array[] = {1.5f, 2.5f, 3.5f};
	char char_array[] = "abcdef";

	std::cout << "Test 1 : int_array" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << int_array[i] << "; ";
	std::cout << std::endl;
	iter(int_array, 5, ft_dec);
	for (int i = 0; i < 5; i++)
		std::cout << int_array[i] << "; ";
	std::cout << std::endl;

	std::cout << "Test 2 : double_array" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << double_array[i] << "; ";
	std::cout << std::endl;
	iter(double_array, 5, ft_dec);
	for (int i = 0; i < 5; i++)
		std::cout << double_array[i] << "; ";
	std::cout << std::endl;

	std::cout << "Test 3 : float_array" << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << float_array[i] << "; ";
	std::cout << std::endl;
	iter(float_array, 3, ft_dec);
	for (int i = 0; i < 3; i++)
		std::cout << float_array[i] << "; ";
	std::cout << std::endl;

	std::cout << "Test 4 : char_array" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << char_array[i] << "; ";
	std::cout << std::endl;
	iter(char_array, 5, ft_dec);
	for (int i = 0; i < 5; i++)
		std::cout << char_array[i] << "; ";
	std::cout << std::endl;
}
