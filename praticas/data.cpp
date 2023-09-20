#include<iostream>

using namespace std;

bool bissexto(int n)
{
	if((n%4==0) && ((n%100!=0) || (n%400==0)) )
		return true;
	
	else
		return false;
}

bool validaData(int d, int m, int a)
{
	if(bissexto(a))
	{
		if(((m==2) && (d>29)) || (((m==4) || (m==6) || (m==9) || (m==11)) && (d>30)))
			return false;
		
		else
			return true;
	}
	else
	{
		if(((m==2) && (d>28)) || (((m==4) || (m==6) || (m==9) || (m==11)) && (d>30)))
			return false;
		
		else
			return true;
	}
	
}

int main()
{
	int a, b, c;
	
	cin >> a >> b >> c;
	
	if(validaData(a,b,c))
		cout << "data valida" << endl;
	
	else
		cout << "data invalida" << endl;
	
	return 0;
}
