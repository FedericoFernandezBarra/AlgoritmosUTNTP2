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

int tokenCount(string s, char sep)
{
     int aux = 0;
     for(int i = 0; i < length(s); i++)
     {
             if(s[i] == sep)
             {
                 aux++;
             }
     }
     return aux+1;
}


int main(int argc, char *argv[])
{
    string cadena;
    char separador;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Ingrese el caracter separador: ";
    cin >> separador;
    cout << "Cantidad de tokens: " << tokenCount(cadena, separador);
    getch();
    return 0;
}
