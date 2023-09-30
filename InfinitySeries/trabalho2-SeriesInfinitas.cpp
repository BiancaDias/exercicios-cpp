//Bianca da Silva Dias - 83278
//Trabalho 2
//trabalho completo

#include<iostream>
#include<cmath>
#include<iomanip>


using namespace std;


int main ()
{
	int selecao, termos;
	long double pi = 0;
	
	cout << "O programa estima o valor de PI utilizando as series de Euler, Leibniz e Walis com ate 10 casas de precisao, dependendo da quantidade de termos para realizar o somatorio." << endl << "Quanto maior a quantidade de termos, mais preciso sera o Pi." << endl;
	cout << "Selecione o numero corresponte a qual a serie infinita pretende usar para calcular o valor de PI: " << endl;
	cout << "1 - Euler" << endl << "2 - Leibniz" << endl << "3 - Wallis" << endl;
	
	inicio: //uso do goto para repetir o comando caso digite um numero inválido
	cin >> selecao;
	
	if((selecao==1) || (selecao==2) || (selecao==3))
	{
		if(selecao==1) // serie de Euler
		{
			double denominador, somatorio, fracao;
			int n;
			
			cout << "Euler" << endl;
			cout << "Digite a quantidade de termos desejada para o somatorio: ";
			cin >> termos;
	
			for(n=1; n<=termos; n++) // Realiza o calculo a cada termo e imprime o resultado
			{
				denominador = pow(n,2); 
				
				fracao= 1 / denominador;
				
				pi = pi + fracao;
				
				somatorio = (sqrt(pi*6));
				
				cout << "Termo "<< n << " PI = "; 
				cout << fixed << setprecision(10) << somatorio << endl;
			}
		}
		
		else if(selecao==2) // serie de Leibniz
		{
			int variavel=0;
			
			cout << "Leibniz" << endl;
			cout << "Digite a quantidade de termos desejada para o somatorio: ";
			cin >> termos;
			
			while(variavel<=termos) // Realiza o calculo a cada termo e imprime o resultado
			{
				pi= pi + ( (pow(-1,variavel)) / ((2*variavel) + 1) );
				
				cout <<"Termo " << variavel << " PI = ";
				cout << fixed << setprecision(10) << pi*4 << endl;
				
				variavel++;
			}
		}
		
		else if(selecao==3) // serie de Wallis
		{
			long double pi=1;
			int variavel=1;
			
			cout << "Wallis" << endl;
			cout << "Digite a quantidade de termos desejada para o somatorio: ";
			cin >> termos;
			
			while(variavel<=termos) // Realiza o calculo a cada termo e imprime o resultado
			{
				pi= pi * ( 4 * (pow(variavel,2)) / ( 4 * (pow(variavel,2)) - 1) );
				
				cout << "Termo " << variavel << " PI = ";
				cout << fixed << setprecision(10) << pi*2 << endl;
				
				variavel++;
			}
		}
	}
	else // Caso a seleção não seja 1, 2 ou 3 ele realiza a repetição
	{
		cout << "Numero invalido. Selecione novamente:" << endl;
		cout << "1 - Euler" << endl << "2 - Leibniz" << endl << "3 - Wallis" << endl;
		goto inicio;
	}
	
	return 0;
}
