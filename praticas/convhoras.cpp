#include <iostream>

using namespace std;



//Converte seg segundos em h horas m minutos s segundos
void convhoras(int seg, int &h, int &m, int &s)
{
	h=seg/3600; //horas;
	m=(seg - (3600 * h))/60; //minutos
	s=(seg - (3600 * h)- (m*60)); //segundos
	
	if (h<10)
	{
		if((m<10) && (s<10))
			cout << "0" << h << ":" << "0" << m << ":" << "0" << s << endl;
		
		else if((m>=10) && (s<10))
			cout << "0" << h << ":" << m << ":" << "0" << s << endl;
		else if((m>=10) && (s>=10))
			cout << "0" << h << ":" << m << ":" << s << endl;
		else if((m<10) && (s>=10))
			cout << "0" << h << ":" << "0" << m << ":" << s << endl;
	}
	else if(h>=10)
	{
		if((m<10) && (s<10))
			cout << h << ":" << "0" << m << ":" << "0" << s << endl;
		
		else if((m>=10) && (s<10))
			cout << h << ":" << m << ":" << "0" << s << endl;
		else if((m>=10) && (s>=10))
			cout << h << ":" << m << ":" << s << endl;
		else if((m<10) && (s>=10))
			cout << h << ":" << "0" << m << ":" << s << endl;
	}
	

}

int main ()
{
	int tempo, hr, min, se;
	
	cin >> tempo;
	
	convhoras(tempo, hr, min, se);
	
return 0;
}
	
