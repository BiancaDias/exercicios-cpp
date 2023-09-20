#include<iostream>
using namespace std;

int Bolha(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]>a[i+1])
            a[i+1]=a[i];
    }
}

int main()
{
    int n, meio;
    double mediana;

    cin >> n;

    int vet[n];

    for(int i=0;i<n;i++)
    {
        cin >> vet[i];
    }

    Bolha(vet[n], n);

    if(n%2==0)
    {
        meio = n/2;

        mediana = (vet[meio] + vet[meio+1])/2;
    }

    else
    {
        meio = n/2;

        mediana = (vet[meio+1]);
    }

    cout << mediana << endl;

    return 0;
}