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

bool contains(string s, char c)
{
    for(int i = 0; i < length(s)+1; i++)
    {
            if(s[i] == c)
            {
                    return true;
            }
    }
    return false;
    
}

int main(int argc, char *argv[])
{
    string cadena;
    char caracter;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Ingrese el caracter a buscar: ";
    cin >> caracter;
    if(contains(cadena, caracter))
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";
    }
    getch();
    return 0;
}
