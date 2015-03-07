#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

string replicate(int n, char c)
{
       string newstring = "";
       for(int i = 0; i < n; i++)
       {
               newstring += c;
       }
       return newstring;
}

int main(int argc, char *argv[])
{
    int numero;
    char caracter;
    cout << "Ingrese el caracter a repetir: ";
    cin >> caracter;
    cout << "Ingrese la cantidad de veces a repetirse el caracter: ";
    cin >> numero;
    cout << "Resultado: " << replicate(numero,caracter) ;
    getch();
    return 0;
}
