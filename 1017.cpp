#include <iostream>
#include <iomanip>

int main(int argc, char** argv)
{
	int tempo_viagem, velocidade_media;
	double total_combustivel;
	
	std::cin >> tempo_viagem;
	std::cin >> velocidade_media;
	
	total_combustivel = (tempo_viagem * velocidade_media)/12.0;
	
	std::cout << std::setprecision(3) << std::fixed; 
	std::cout << total_combustivel << std::endl;
	return 0;
}