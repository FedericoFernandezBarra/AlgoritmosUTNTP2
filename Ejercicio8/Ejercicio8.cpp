#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int length(string s)
{
    int i = 0;
    while(s[i] != '\0')
    {
          i++;
    }
    return i;
}

string insertAt(string s, char c, int i)
{
    string newstring = "";
    for(int j = 0; j < length(s); j++)
    {
            if(j+1 == i)
            {
                newstring += c;
            }         
            newstring += s[j];
    }
    return newstring;
}

int main(int argc, char *argv[])
{
    string cadena;
    char caracter;
    int pos;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Ingrese el caracter a insertar: ";
    cin >> caracter;
    cout << "Ingrese la posicion a insertar el caracter: ";
    cin >> pos;
    cout << "Resultado: " << insertAt(cadena, caracter, pos);
    getch();
    return 0;
}

