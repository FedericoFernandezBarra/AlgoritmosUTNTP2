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

string ltrim(string s)
{
    string newstring = "";
    bool stop = false;
    for(int i = 0; i < length(s); i++)
    {           
        if(s[i] != ' ')
        {
           stop = true;      
        }
        if(stop == true)
        {
          newstring += s[i];
        }
    }
    return newstring; 
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

string trim(string s)
{
       return rtrim(ltrim(s));
}

int main(int argc, char *argv[])
{
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Resultado (sin espacios a los costados): " << trim(cadena);
    getch();
    return 0;
}
