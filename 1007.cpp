#include <iostream>

int main()
{
	int a, b, c, d, diferenca;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;

	diferenca = (a * b - c * d);
	std::cout << "DIFERENCA = " << diferenca << std::endl;
	return 0;
}
