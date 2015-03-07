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

bool capicua(string s)
{
     if(reversa(s) == s)
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
    string cadena;
    cout << "Ingrese una cadena para saber si es capicua: ";
    getline(cin, cadena);
    if(capicua(cadena))
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
