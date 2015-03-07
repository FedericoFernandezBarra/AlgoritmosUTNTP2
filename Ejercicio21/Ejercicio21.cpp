#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

bool isLowerCase(char c)
{
     if(c == 'a' || c == 'b' || c == 'c' || c == 'd' || c == 'e' || c == 'f' || c == 'g' || c == 'h' || c == 'i' || c == 'j' || c == 'k' || c == 'l' || c == 'm' || c == 'n' || c == 'o' || c == 'p' || c == 'q' || c == 'r' || c == 's' || c == 't' || c == 'u' || c == 'v' || c == 'w' || c == 'x' || c == 'y' || c == 'z')
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
    cout << "Ingrese un caracter para saber si es minuscula: ";
    cin >> caracter;
    if(isLowerCase(caracter))
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
