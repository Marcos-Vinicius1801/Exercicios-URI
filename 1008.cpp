#include<iostream>
#include<iomanip>

int main()
{
	double pagamento, numero_funcionario, qtdade_horas_trabalhadas, valor_hora_trabalho;

	std::cin >> numero_funcionario;
	std::cin >> qtdade_horas_trabalhadas;
	std::cin >> valor_hora_trabalho;

	pagamento = qtdade_horas_trabalhadas * valor_hora_trabalho;
	
	std::cout<<"NUMBER = "<< numero_funcionario <<std::endl;
	std::cout<<"SALARY = U$ "<<std::setprecision(2)<<std::fixed<<pagamento<<std::endl;
	
	return 0;
}
