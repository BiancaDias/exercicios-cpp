//leibniz

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{ 
	long double pi=0;
	int variavel=0;
	
	while(variavel<=170000)
	{
		pi= pi + ( (pow(-1,variavel)) / ((2*variavel) + 1) );
		
		cout << variavel << " ";
		cout << fixed << setprecision(10) << pi*4 << endl;
		
		variavel++;
	}
	return 0;
}
