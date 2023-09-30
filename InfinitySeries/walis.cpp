//Wallis

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{ 
	long double pi=1;
	int variavel=1;
	
	while(variavel<=170000)
	{
		pi= pi * ( 4 * (pow(variavel,2)) / ( 4 * (pow(variavel,2)) - 1) );
		
		cout << variavel << " ";
		cout << fixed << setprecision(10) << pi*2 << endl;
		
		variavel++;
	}
	return 0;
}
