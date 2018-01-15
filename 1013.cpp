#include <iostream>

int main(int argc, char** argv)
{
	int a, b ,c = 0;
	
	std::cin >> a >> b >> c; 
	
	
	if((a > b) && (a > c))
		std::cout << a << " eh o maior" << std::endl;
	
	if((b > a) && (b > c))
		std::cout << b << " eh o maior" << std::endl;
	
	if((c > a) && (c > b))
		std::cout << c << " eh o maior" << std::endl;
	
	return 0;
}
