//Engrenagens
//Receber duas vari�veis
//Verificar se a divis�o entre elas � exata

#include <iostream>

using namespace std;

int main()
{
	int a, b;
	int div;
	
	cin >> a >> b;
	
	div = b % a;
	
	if (div==0)
		cout << "1" << endl;
	else
		cout << "0" << endl;
		
	return 0;
}
