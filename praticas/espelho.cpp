#include <iostream>
using namespace std;

int espelhar(int n)
{
   int ret=0;
   int i=1;
   
   while(i<=n)
   {
       ret*=10;
       ret+=(n%(i*10)-n%i)/i;
       i*=10;
   }
   return ret;
}

int main ()
{
	int a, b, inv;
	
	do{
	cin >> a >> b;
		if ((a==0) && (b==0))
		{
			break;
		}
		if (espelhar(b)==a)
			{
				cout <<"espelho" << endl;
			}
		else
			cout << "nao espelho" << endl;
		
	}while ((a!=0) && (b!=0));
	
return 0;
}
