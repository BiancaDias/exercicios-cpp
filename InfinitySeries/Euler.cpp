//teste Euler
//soma dos numeros ímpares


#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	double n=1, pi=0 , denominador, somatorio, fracao;
	
	for(n=1; n<5000000; n++)
	{
		denominador = pow(n,2); // certeza q ta certo
		
		fracao= 1 / denominador; // conferido
		
		pi = pi + fracao;
		
		somatorio = (sqrt(pi*6));
		
		cout << fixed << setprecision(10) << somatorio << endl;
	}
	
	
	
	return 0;
}
