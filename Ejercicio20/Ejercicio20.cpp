#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

bool isUpperCase(char c)
{
     if(c == 'A' || c == 'B' || c == 'C' || c == 'D' || c == 'E' || c == 'F' || c == 'G' || c == 'H' || c == 'I' || c == 'J' || c == 'K' || c == 'L' || c == 'M' || c == 'N' || c == 'O' || c == 'P' || c == 'Q' || c == 'R' || c == 'S' || c == 'T' || c == 'U' || c == 'V' || c == 'W' || c == 'X' || c == 'Y' || c == 'Z')
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
    cout << "Ingrese un caracter para saber si es mayuscula: ";
    cin >> caracter;
    if(isUpperCase(caracter))
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
