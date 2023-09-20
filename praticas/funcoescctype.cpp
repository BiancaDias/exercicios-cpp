//islower

#include<iostream>

int islower(int c) // retorna se é letra minuscula
{
    if (c>='a' && c<='z')
        return true;
    else
        return false;
}

int isupper(int c) // retorna se é letra maiuscula
{
    if (c>='A' && c<='Z')
        return true;
    else
        return false;
}

int isalpha(int c) // retorna se é letra minuscula ou maiuscula
{
    if (c>='a' && c<='z' || c>='A' && c<='Z')
        return true;
    else
        return false;
}

int isalnum(int c) // retorna se é letra ou numero
{
    return(isdigit(c) || isalpha(c));
}

int tolower(int c) //transforma em minuscula
{
    if(isupper(c))
        return c - ('A' - 'a');
    else  
        return c;
}

int toupper(int c) //transforma em maiuscula
{
    if(islower(c))
        return c - ('a' - 'A');
    else  
        return c;
}
using namespace std;

int main ()
{
    char p[50];

    
    return 0;
}