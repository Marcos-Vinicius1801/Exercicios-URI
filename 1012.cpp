#include <iostream>
#include <iomanip>
#include <math.h>

int main(int argc, char** argv)
{
	double pi = 3.14159;
	double a, b, c;
	double area_triangulo, area_circulo, area_trapezio, area_quadrado,area_retangulo;
	
	std::cin >> a >> b >> c;
	
 
	area_triangulo = a * c / 2;
	
  
	area_circulo = pi * pow(c, 2);
 
 
    area_trapezio = ((a + b)* c)/2;
    
 
    area_quadrado = pow(b, 2);
    
 
    area_retangulo = a * b;
	
    std::cout << std::fixed << std::setprecision(3);
	std::cout << "TRIANGULO: " << area_triangulo << std::endl;	
	std::cout << "CIRCULO: " << area_circulo << std::endl;	
	std::cout << "TRAPEZIO: " << area_trapezio << std::endl;
	std::cout << "QUADRADO: " << area_quadrado << std::endl;
	std::cout << "RETANGULO: " << area_retangulo << std::endl;
	
	return 0;
}