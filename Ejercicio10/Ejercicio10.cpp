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

int main(int argc, char *argv[])
{
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Resultado (sin espacios a la izquierda): " << ltrim(cadena);
    getch();
    return 0;
}
