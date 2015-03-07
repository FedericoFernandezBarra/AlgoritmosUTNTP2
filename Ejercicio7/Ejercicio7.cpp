#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

string substring(string s, int i, int j)
{
    string newstring = "";
    for(int cont = i-1; cont < j-1; cont++)
    {         
            newstring += s[cont];
    }
    return newstring;
}

int main(int argc, char *argv[])
{
    string cadena;
    int com, fin;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Ingrese el comienzo: ";
    cin >> com;
    cout << "Ingrese el fin: ";
    cin >> fin;
    cout << "Resultado: " << substring(cadena, com, fin);
    getch();
    return 0;
}

