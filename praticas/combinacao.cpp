//combinacao

#include<iostream>
using namespace std;


//retorna valor de x!
long long int fatorial(int x)
{
	long long int fat=1;
	
	for(int i=2; i <= x; i++)
		fat*= i;
		
	return fat;
}

int main()
{
	int n, k;
	long long int combinacao, mult;
	
	cin >> n >> k;
	
	mult = n - k;
	
	combinacao = fatorial(n) / (fatorial(k) * fatorial(mult));
	
	cout << combinacao << endl;
	
	return 0;
	
}
