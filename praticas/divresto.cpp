#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int resto;
	int div;
	
	cin >> a >> b;
	
	div = a/b;
	
	resto = a%b;
	
	cout << div << " " << resto << endl;
	
	return 0;
}
