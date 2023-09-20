#include <iostream>
#include <iomanip>
using namespace std;

double imposto(double v)

{
	double cal=0, total=0;
	
	if ((v>=22847.77) && (v<=33919.80))
	{
		cal= (7.5 * v) /100;
		total = cal - 1713.58;
	}
	else if ((v>=33919.81) && (v<=45012.60))
	{
		cal= (15 * v) /100;
		total = cal - 4257.57;
	}
	else if ((v>=45012.61) && (v<=55976.16))
	{
		cal= (22.5 * v) /100;
		total = cal - 7633.51;
	}
	else if (v>=55976.16)
	{
		cal= (27.5 * v) /100;
		total = cal - 10432.32;
	}
	else
		total = 0.00;

return total;

}

int main ()
{
	double v,impost;
	
	do{
	cin >> v;
		if (v==0)
		{
			break;
		}
		
		impost=imposto(v);
		
		cout << fixed;
		cout << setprecision(2);
		cout <<"R$ " << impost << endl;
		
	}while (v!=0);
		
return 0;
}
	
