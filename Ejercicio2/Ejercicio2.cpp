#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

bool isEmpty(string s)
{
     return s == "\0";
}

int main(int argc, char *argv[])
{
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    if(isEmpty(cadena))
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
