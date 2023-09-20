 //ponteiros aula 19

#include <iostream>

using namespace std;

void troca(int *x,int *y) //forma de passagem por referencia em c
{
    int aux = *x;
    *x = *y;
    *y = aux;
}

void trocaC (int &q, int &p) // forma de passagem por referencia em c++
{
    int aux = q;
    q = p;
    p = aux;
}

int main()
{
    int a;

    int *p; //um tipo de variável que guarda o endereço de outra variável (o * é para indicar que é um ponteiro)

    a=5;

    p=  &a; //assim p vai guardar o endereço de a. Se mandar imprimir p agora, ele fara a mesma coisa que cout << &a

    cout << &a << endl; //& faz com que escreva o endereço onde a variavel a está armazenada na memória
    cout << p << endl;
    cout << &p << endl;

    int b;

    b = *p; //b irá receber o conteúdo de p. No caso p aponta para A que é igual a 5. B=5;

    cout << b << endl;

    cout << sizeof(int) << endl; //retorna o tamanho que uma variavel coupa na memória, no caso int. Mas pode ser qualquer tipo

    int c, d;

    cin >> c >> d;

    if(c>d) 
        troca(&c,&d); // forma de passagem por referencia em c

    cout << c << d << endl;

    if (d>c) // forma de passagem por referencia em c++
        trocaC(d,c)


    return 0;
}