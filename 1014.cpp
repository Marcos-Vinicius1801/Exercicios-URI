#include <iostream>
#include <iomanip>

int main(int argc, char** argv)
{
	int distancia_km = 0;
	double total_combustivel, consumo_medio; 
	
	std::cin >> distancia_km;
	std::cin >> total_combustivel;
	
	consumo_medio = distancia_km / total_combustivel ;
	
	std::cout << std::fixed << std::setprecision(3);
	std::cout << consumo_medio <<" km/l" << std::endl; 
	
	return 0;
}

 