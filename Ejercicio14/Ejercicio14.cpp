#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

string spaces(int n)
{
       string newstring = "";
       for(int i = 0; i < n; i++)
       {
               newstring += ' ';
       }
       return newstring;
}

int main(int argc, char *argv[])
{
    int numero;
    cout << "Ingrese la cantidad de espacios: ";
    cin >> numero;
    cout << "Resultado: " << spaces(numero);
    getch();
    return 0;
}
