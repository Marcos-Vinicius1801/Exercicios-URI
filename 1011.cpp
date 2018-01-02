#include <iostream>
#include <math.h>
#include<iomanip>

int main(int argc, char** argv)
{
	double pi = 3.14159;
	double R = 0, volume = 0;
	
	std::cin >> R;
	volume = (4.0/3) * pi * pow(R,3);
	std::cout <<"VOLUME = "<< std::setprecision(3) << std::fixed << volume << std::endl; 
	return 0;
}

 