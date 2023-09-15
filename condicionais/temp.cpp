//temp

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double temp;
	char graus;
	double conversao, div;
	
	cin >> temp >> graus;
	
	div = 0.5555555556;
	
	if(graus == 'C')//converter para Fahrenheit
	{
		conversao = ((temp * (1.8)) + 32);
		cout << fixed << setprecision(1) << conversao << " F" << endl;
	}
	else //(graus == 'F')//Converter para celcius
	{
		conversao = ((temp - 32) * (div));
		cout << fixed << setprecision(1) << conversao <<" " << "C"<< endl;
	}
	

	
	return 0;
}
