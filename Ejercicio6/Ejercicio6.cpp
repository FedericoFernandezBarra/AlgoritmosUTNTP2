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

int replace(string& s, char oldChar, char newChar)
{
    int cantidad = 0;
    for(int i = 0; i < length(s)+1; i++)
    {         
            if(s[i] == oldChar)
            {
                    s[i] = newChar;
                    cantidad++;
            }
    }
    return cantidad;
}

int main(int argc, char *argv[])
{
    string cadena;
    char caracter, caracterNuevo;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Ingrese el caracter a reemplazar: ";
    cin >> caracter;
    cout << "Ingrese el caracter nuevo: ";
    cin >> caracterNuevo;
    cout << "Veces que se reemplazo: " << replace(cadena, caracter, caracterNuevo) << " Resultado: " << cadena;
    getch();
    return 0;
}
