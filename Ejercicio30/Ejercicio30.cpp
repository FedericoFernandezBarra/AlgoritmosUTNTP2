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

string getTokenAt(string s, char sep, int i)
{
     string token = "";
     int contaux = 0;
     for(int j = 0; j < length(s); j++)
     {
             if(contaux == i)
             {
                 return token;         
             }
             if(s[j] == sep)
             {
                 contaux++;
             }
             if(contaux == i-1 && s[j] != sep)
             { 
                 token += s[j]; 
             }
     }
}

int main(int argc, char *argv[])
{
    string cadena;
    char separador;
    int posicion;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Ingrese el caracter separador: ";
    cin >> separador;
    cout << "Ingrese la posicion del token: ";
    cin >> posicion;
    cout << "Token: " << getTokenAt(cadena, separador, posicion);
    getch();
    return 0;
}
