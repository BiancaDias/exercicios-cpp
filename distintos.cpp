//distintos

#include <iostream>
using namespace std;

int main()
{
	int n, cont=0, soma=0;
	bool comp=true;
	
	cin >> n;
	
	int a[n];
	
	
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}

	
	for(int i=0; i<n; i++)
	{
		comp=true;
		for(int j=0; j<n; j++)
		{
			if((a[i] == a[j]) && (i!=j))
			{
				comp=false;	
			}
			
		}
		if(comp)
			cont++;
	}


	
	cout << cont << endl;
	
	return 0;
}
