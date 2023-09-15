#include <iostream>

using namespace std;


int main()
{
	int a, b;
	
	
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
//Algoritmo do MMC
//int mmc(int a, int b){
    return a * (b / mdc(a, b));
}
//Testes
 {
    printf("MMC\n");
    printf("mmc(30, 60) = %d\n", mmc(30, 60));
    printf("mmc(60, 100) = %d\n", mmc(60, 100));
    printf("mmc(36, 14) = %d\n", mmc(36, 14));
    return 0;
}
}
