//cra

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int n, soma=0;
	double somacredito=0, somatorio=0;
	
	cin >> n;
	
	int nf[n], credito[n], produto[n];

	
	for(int i=0; i<n; i++)
	{
		cin >> nf[i];
	}
	
	for(int i=0; i<n; i++)
	{
		cin >> credito[i];
	}
	
	for(int i=0; i<n; i++)
	{
		somacredito=somacredito+credito[i];
	}
	
	for(int i=0; i<n; i++)
	{
		produto[i] = nf[i] * credito [i];
	}
	
	for(int i=0; i<n; i++)
	{
		soma = produto [i] + soma;
	}
	
	somatorio = soma/somacredito;
	
	cout << fixed << setprecision(1) << somatorio << endl;
	
	return 0;
	
	
}
