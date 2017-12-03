#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	double raio, area;
	double pi = 3.14159;

	cin >> raio;
	area = pi * (raio * raio);
	cout << "A=" << setprecision(4) << fixed << area << endl;
	return 0;
}
