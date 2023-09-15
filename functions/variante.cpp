//variante

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long int p;
	int g, cont=0;
	
	
	cin >> p >> g;
	
	
	while(p < 1000000000)
	{
		p=(p*g)+p;
		cont++;
	}
	
	cout << cont << endl;
	
	return 0;
}
