//prodesc

#include<iostream>

using namespace std;

int main()
{
	int n, soma=0;
	
	cin >> n;
	
	int a[n], b[n], c[n];
	
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}

	for(int j=0; j<n; j++)
	{
		cin >> b[j];
	}
	
	for(int i=0; i<n; i++)
	{
		c[i] = a[i] * b[i];
	}
	
	for(int i=0; i<n; i++)
	{
		soma = c[i] + soma;
	}
	
	cout << soma << endl;
	
	return 0;
}
