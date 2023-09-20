#include<iostream>
#include<cstring>

using namespace std;

/*funcoes da cstring
strlen - retorna o tamanho de uma string
strcpy - copia entre duas strings
strcat - concatenação (copia a segunda string pro final da primeira)
strcmp - compara qual palavra vem antes de outra no dicionário
strncpy - compara a quantidade desejada de caracteres
strtok

*/

int main()
{
    char a[50], b[50];

    cin >> a >> b;

    strcpy(a,b) //a vai receber o conteudo de b tipo a = b

    strcat(a,b); //a - a+b

    //compara qual palavra vem antes de outra no dicionário
    if (strcmp(a,b) < 0) //se é menor q 0 significa q a vem antes. Se é igual a zero as duas são iguais. Se é maior q zero b vem antes
        cout << a << " vem antes de " << b << " no dicionario" << endl;
    else if (strcmp(a,b) == 0)
        cout << b << " e " << a << " sao iguais" << endl;
    else
        cout << a << " vem depois de " << b << " no dicionario" << endl;

    if(strncmp(a,b,3)<0) //compara as 3 primeiras letras da palavra


    cout  << a << endl;
    return 0;
}