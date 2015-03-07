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

string reversa(string s)
{
       string res = "";
       for(int i = length(s)-1; i >= 0; i--)
       {
               res += s[i];
       }
       return res;
}

int main(int argc, char *argv[])
{
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Cadena invertida: " << reversa(cadena);
    getch();
    return 0;
}
