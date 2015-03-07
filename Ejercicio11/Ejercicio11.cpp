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

int espacios(string s)
{
    int cantidad = 0;
    for(int i = 0; i < length(s); i++)
    {           
        if(s[i] == ' ' || s[i] == '\0')
        {
                cantidad ++;
                }
                else
                {
                    cantidad=0;
                }
    }
    return cantidad;
}

string rtrim(string s)
{
    string newstring = "";
    
    for(int i = 0; i < length(s)-espacios(s); i++)
    {           
        newstring += s[i];
    }
    return newstring; 
}

int main(int argc, char *argv[])
{
    string cadena;
    string invertida, invertida2;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Resultado (sin espacios a la derecha): " << rtrim(cadena);
    getch();
    return 0;
}
