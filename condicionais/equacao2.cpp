//equacao2

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main ()
{
	double a, b, c;
	double delta, x1, x2;
	
	cin >> a >> b >> c;
	
	delta = (b*b) - (4 * a *c);
	
	if(delta < 0)
		cout << "Nao ha raiz real" << endl;
		
	else if (delta == 0)
	{
		x1 = (-b) / (2 * a);
		cout << fixed << setprecision(2) << x1 << endl;
	}
	else
	{
		x2 = (-b + sqrt(delta)) / (2*a);
		x1 = (-b - sqrt(delta)) / (2*a);
		cout << fixed << setprecision(2) << x1 << " " << x2 << endl;
	}
	
	return 0;
}
