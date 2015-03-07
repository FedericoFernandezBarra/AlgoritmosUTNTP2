#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <sstream>

using namespace std;

int stringToInt(string s)
{
     int num;
     istringstream res(s);
     res >> num;
     return num;  
}

int main(int argc, char *argv[])
{
    string cadena;
    cout << "Ingrese una cadena para ser convertida a tipo de dato int: ";
    cin >> cadena;
    cout << "Resultado: " << stringToInt(cadena);
    getch();    
    return 0;
}
