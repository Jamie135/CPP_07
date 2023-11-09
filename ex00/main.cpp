#include "whatever.hpp"

int main(void)
{
	std::cout << "------- Project Test -------\n" << std::endl;
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	std::cout << std::endl;

	std::cout << "------- My Test -------\n" << std::endl;
	std::cout << "\nTest 1 : min test" << std::endl;
	std::cout << "char [c, A] : " << min<char>('c', 'A') << std::endl; 
	std::cout << "int [-17, 42] : " << min<int>(-17, 42) << std::endl; 
	std::cout << "float [10.42f, -0.5f] : " << min<float>(10.42f, -0.5f) << std::endl; 
	std::cout << "double [10.0, 10.0] : " << min<double>(10.0,10.0) << std::endl;
	
	std::cout << "\nTest 2 : max test" << std::endl;
	std::cout << "char [c, A] : " << max<char>('c', 'A') << std::endl; 
	std::cout << "int [-17, 42] : " << max<int>(-17, 42) << std::endl; 
	std::cout << "float [10.42f, -0.5f] : " << max<float>(10.42f, -0.5f) << std::endl;
	std::cout << "double [10.0, 10.0] : " << max<double>(10.0,10.0) << std::endl;
	
	std::cout << "\nTest 3 : swap test" << std::endl;
	int e = 5;
	int f = 100;
	swap<int>(e, f);
	std::cout << "int [5, 100] : " << e << " " << f << std::endl;
	char g = '4';
	char h = '2';
	swap<char>(g, h);
	std::cout << "char ['4', '2'] : " << g << " " << h << std::endl;
	return 0;
}
