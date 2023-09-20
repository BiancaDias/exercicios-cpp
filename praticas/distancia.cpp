#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double x1, y1, x2, y2;
	double distancia;
	
	cin >> x1 >> y1 >> x2 >> y2;
	// (a-b)^2 = a^2 - 2*a*b + b^2
	
	double potencia1, potencia2;
	
	potencia1 = ((x2*x2) - (2 * x2 * x1) + (x1 * x1));
	potencia2 = ((y2*y2) - (2 * y2 * y1) + (y1 * y1));
	
	
	distancia = sqrt( potencia1 + potencia2 );
	
	cout << fixed << setprecision(2) << distancia << endl;
	
	return 0;
	
	}
