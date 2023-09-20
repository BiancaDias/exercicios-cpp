#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a, b;
	double div;
	
	cin >> a >> b;
	
	div = a / b;
	
	cout << fixed << setprecision (2) << div << endl;
	
}
