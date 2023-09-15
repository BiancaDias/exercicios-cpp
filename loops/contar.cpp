//contar

#include<iostream>
using namespace std;

int main()
{
	int n, cont=0, comparacao;
	
	cin >> n;
	
	int vetor[n];
	
	for(int i=0; i<n; i++)
	{
		cin >> vetor[i];
	}
	
	cin >> comparacao;
	
	for(int j=0; j<n; j++)
	{
		if(vetor[j]>=comparacao)
			cont++;
	}
	
	cout << cont << endl;
	
	return 0;
}
