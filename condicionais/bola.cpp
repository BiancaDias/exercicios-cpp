//Bola

#include <iostream>
using namespace std;

int main ()
{
	int diametro;
	int a, l, p;
	
	cin >> diametro >> a >> l >> p;
	
	if ((a < diametro) || (l < diametro) || (p < diametro))
		cout << "N" << endl;
	else
		cout << "S" << endl;
	return 0;
}
