//Sapiens

#include <iostream>
using namespace std;

int main()
{
	int nf, ft, fp;
	
	cin >> nf >> ft >> fp;
	
	if((ft > 15) || (fp > 7))
		cout << "Reprovado" << endl;
	else
	{
		if(nf>= 60)
			cout << "Aprovado" << endl;
		else if((nf < 60) && (nf>= 40))
			cout << "Final" << endl;
		else
			cout << "Reprovado" << endl;
	}
	
	return 0;
}
