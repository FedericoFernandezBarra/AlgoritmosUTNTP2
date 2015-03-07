#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

char toUpperCase(char c)
{
     if(c == 'a')
     {
          return 'A';
     }
     if(c == 'b')
     {
          return 'B';
     }
     if(c == 'c')
     {
          return 'C';
     }
     if(c == 'd')
     {
          return 'D';
     }
     if(c == 'e')
     {
          return 'E';
     }
     if(c == 'f')
     {
          return 'F';
     }
     if(c == 'g')
     {
          return 'G';
     }
     if(c == 'h')
     {
          return 'H';
     }
     if(c == 'i')
     {
          return 'I';
     }
     if(c == 'j')
     {
          return 'J';
     }
     if(c == 'k')
     {
          return 'K';
     }
     if(c == 'l')
     {
          return 'L';
     }
     if(c == 'm')
     {
          return 'M';
     }
     if(c == 'n')
     {
          return 'N';
     }
     if(c == 'o')
     {
          return 'O';
     }
     if(c == 'p')
     {
          return 'P';
     }
     if(c == 'q')
     {
          return 'Q';
     }
     if(c == 'r')
     {
          return 'R';
     }
     if(c == 's')
     {
          return 'S';
     }
     if(c == 't')
     {
          return 'T';
     }
     if(c == 'u')
     {
          return 'U';
     }
     if(c == 'v')
     {
          return 'V';
     }
     if(c == 'w')
     {
          return 'W';
     }
     if(c == 'x')
     {
          return 'X';
     }
     if(c == 'y')
     {
          return 'Y';
     }
     if(c == 'z')
     {
          return 'Z';
     }
}

int main(int argc, char *argv[])
{
    char caracter;
    cout << "Ingrese un caracter para ser transformado a mayuscula: ";
    cin >> caracter;
    cout << "Resultado: " << toUpperCase(caracter);
    getch();
    return 0;
}
