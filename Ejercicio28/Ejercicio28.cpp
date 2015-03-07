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

bool tokenizer(string s, char sep, string& token, int& aux)
{
     token = "";
     for(int i = aux; i < length(s); i++)
     {
             if(s[i] == sep)
             {
                 aux++;
                 return true;
             }
             else
             {
                 token += s[i];
                 aux++;
             }
     }
     if(token == "")
     {
              return false;
     }
}

int main(int argc, char *argv[])
{
    string cadena, token;
    char separador;
    int aux = 0;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Ingrese el caracter separador: ";
    cin >> separador;
    while(tokenizer(cadena, separador, token, aux))
    {
          cout << token << endl;
    }
    getch();
    return 0;
}
