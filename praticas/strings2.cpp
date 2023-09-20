//strings

//cin >> string lê tudo até o "espaço ou enter"
//cin.getline(string,tamanho) vai ler tudo até no enter

//cin.getline(string,tamanho,".") aqui pode ser usado qualquer caracter. No caso, o getline vai ler até chegar no ponto

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char nome[50];

   // cin.getline(nome,50);

    //for(int i=0; nome[i]!='\0'; i++) // para imprimir direitinho até chegar no enter (mas não precisa pq o cout já escreve direitinho)
      //  cout << nome[i] << endl;
    //cout << '*' << endl;


     /*funções da <cctype>

     aula 20b - 43:15

     int islower - retorna se o caracter é uma letra minuscula (retorna 0 pra falso e qualquer outra coisa pra verdadeiro)
     int isupper - retorna se o caracter é maiúscula (retorna 0 pra falso e qualquer outra coisa pra verdadeiro)
     int isalpha - se é letra
     int isdigit - se é um digito de 0 a 9
     int isalnum - se é letra ou número
     int tolower - transforma a letra em minuscula
     int toupper - transforma a letra em maiuscula
     */

    //exemplo (uso de toupper)
     char teste[50];
     cin >> teste;

     for(int i=0; teste[i] != '\0'; i++)
        cout << (char)toupper(teste[i]); //toupper devolve um int. Então (char) converte para char
    cout << endl;


    return 0;

}

