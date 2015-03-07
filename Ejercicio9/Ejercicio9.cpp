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

string deleteAt(string s,  int i)
{
    string newstring = "";
    for(int j = 0; j < length(s); j++)
    {
            if(j+1 != i)
            {
                newstring += s[j];
            }         
    }
    return newstring;
}

int main(int argc, char *argv[])
{
    string cadena;
    int pos;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Ingrese la posicion a borrar el caracter: ";
    cin >> pos;
    cout << "Resultado: " << deleteAt(cadena, pos);
    getch();
    return 0;
}

