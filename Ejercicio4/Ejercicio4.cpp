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

int lastIndexOf(string s, char c)
{
    for(int i = length(s)+1; i > 0; i--)
    {
            if(s[i] == c)
            {
                    return i+1;
            }
    }
    return -1;
    
}

int main(int argc, char *argv[])
{
    string cadena;
    char caracter;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Ingrese el caracter a buscar: ";
    cin >> caracter;
    cout << "Posicion del caracter buscado: " << lastIndexOf(cadena, caracter);
    getch();
    return 0;
}
