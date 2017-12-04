#include <iostream>
#include <iomanip>

int main()
{
	int cod_roupa1, cod_roupa2, qtdade_roupa1, qtdade_roupa2;
	double valor_roupa1, valor_roupa2, valor_total;

	std::cin >> cod_roupa1 >> qtdade_roupa1 >> valor_roupa1;
	std::cin >> cod_roupa2 >> qtdade_roupa2 >> valor_roupa2;

	valor_total = (valor_roupa1 * qtdade_roupa1) + (valor_roupa2 * qtdade_roupa2);
	std::cout << "VALOR A PAGAR: R$ " << std::setprecision(2) << std::fixed << valor_total << std::endl;
	return 0;
}
