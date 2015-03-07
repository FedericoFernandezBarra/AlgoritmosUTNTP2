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

int main(int argc, char *argv[])
{
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Longitud: " << length(cadena);
    getch();
    return 0;
}
