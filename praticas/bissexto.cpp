//bissexto

#include<iostream>

using namespace std;

bool bissexto(int n)
{
	if((n%4==0) && ((n%100!=0) || (n%400==0)) )
		return true;
	
	else
		return false;
}

int main()
{
	int ano;
	
	while(ano!= -1)
	{
		cin >> ano;
		if(ano<0)
			break;
		
		else if(bissexto(ano))
			cout << "bissexto" << endl;
			
		else
			cout <<"nao bissexto" << endl;
	}
	
	return 0;
}
