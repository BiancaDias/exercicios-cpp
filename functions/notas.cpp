//notas
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int alunos=0, cont=1;
	double notas=0, media=0, total=0;
	
	cin >> alunos;
	
	while(cont<=alunos)
	{
		cin >> notas;
		total=total+notas;
		cont++;
	}
	
	
	
	media = total/alunos;
	
	cout << fixed << setprecision(2) << media << endl;
	
	return 0;
}
