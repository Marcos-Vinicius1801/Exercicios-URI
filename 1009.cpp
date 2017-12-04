#include<iostream>
#include<iomanip>

int main()
{
	std::string nome;
	double salario_fixo, vendas_semanal, salario_total;
	std::cin >> nome;
	std::cin >> salario_fixo;
	std::cin >> vendas_semanal;
	salario_total = salario_fixo + (vendas_semanal * 0.15);
	std::cout << "TOTAL = R$ " << std::setprecision(2) << std::fixed << salario_total << std::endl;
	return 0;


}
