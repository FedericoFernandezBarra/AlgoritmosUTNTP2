#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

bool isDigit(char c)
{
     if(c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' || c == '0')
     {
          return true;
     }
     else
     {
         return false;
     }
}

int main(int argc, char *argv[])
{
    char caracter;
    cout << "Ingrese un caracter para saber si es digito: ";
    cin >> caracter;
    if(isDigit(caracter))
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
