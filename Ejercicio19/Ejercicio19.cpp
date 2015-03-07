#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

bool isLetter(char c)
{
     if(c == 'a' || c == 'A' || c == 'b' || c == 'B' ||c == 'c' || c == 'C' ||c == 'd' || c == 'D' ||c == 'e' || c == 'E' ||c == 'f' || c == 'F' ||c == 'g' || c == 'G' ||c == 'h' || c == 'H' ||c == 'i' || c == 'I' ||c == 'j' || c == 'J' ||c == 'k' || c == 'K' ||c == 'l' || c == 'L' ||c == 'm' || c == 'M' ||c == 'n' || c == 'N' ||c == 'o' || c == 'O' ||c == 'p' || c == 'P' ||c == 'q' || c == 'Q' ||c == 'r' || c == 'R' ||c == 's' || c == 'S' ||c == 't' || c == 'T' ||c == 'u' || c == 'U' ||c == 'v' || c == 'V' ||c == 'w' || c == 'W' ||c == 'x' || c == 'X' ||c == 'y' || c == 'Y' ||c == 'z' || c == 'Z')
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
    cout << "Ingrese un caracter para saber si es letra: ";
    cin >> caracter;
    if(isLetter(caracter))
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
