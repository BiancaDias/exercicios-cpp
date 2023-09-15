//Engrenagens
//Receber duas variáveis
//Verificar se a divisão entre elas é exata

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
