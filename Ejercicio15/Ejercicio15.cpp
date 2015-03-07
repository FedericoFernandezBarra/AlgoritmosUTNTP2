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

string lpad(string s, int n, char c)
{
       string newstring = "";
       for(int i = 0; i < n; i++)
       {
               newstring += c;
       }
       for(int j = 0; j < length(s); j++)
       {
               newstring += s[j];
       }
       return newstring;
}

int main(int argc, char *argv[])
{
    string cadena;
    int numero;
    char caracter;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Ingrese el caracter a repetir: ";
    cin >> caracter;
    cout << "Ingrese la cantidad de veces a repetirse el caracter: ";
    cin >> numero;
    cout << "Resultado: " << lpad(cadena, numero, caracter);
    getch();
    return 0;
}
