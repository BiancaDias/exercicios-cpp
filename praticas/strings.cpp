//strings

//cin >> string lê tudo até o "espaço ou enter"
//cin.getline(string,tamanho) vai ler tudo até no enter

//cin.getline(string,tamanho,".") aqui pode ser usado qualquer caracter. No caso, o getline vai ler até chegar no ponto

#include <iostream>
using namespace std;

int main()
{
    char nome[50];

    cin.getline(nome,50);

    for(int i=0; nome[i]!='\0'; i++)
        cout << nome[i] << endl;
    cout << '*' << endl;


    return 0;

}

