#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <sstream>

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

string integerastring(int n)
{
     ostringstream ss;
     ss << n;
     return ss.str();
}

string intToString(int n, int v)
{
       string retorno = "";
       for(int i = length(integerastring(n)); i < v; i++)
       {
               retorno += '0';
       }   
       retorno += integerastring(n);    
       return retorno;
}

int main(int argc, char *argv[])
{
    int num, cifras;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << "Ingrese la cantidad de cifras: ";
    cin >> cifras;
    cout << "Resultado: " << intToString(num, cifras);
    getch();
    return 0;
}
