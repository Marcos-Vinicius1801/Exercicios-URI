#include <iostream>
#include <iomanip>

int main()
{
	double a, b, media;

	std::cin >> a;
	std::cin >> b;

	media = (((a * 3.5) + (b* 7.5))/11);

	std::cout << "MEDIA = " << std::setprecision(5) << std::fixed<< media << std::endl;
	return 0;
}
