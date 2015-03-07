#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <sstream>

using namespace std;

string convertir(double n)
{
     ostringstream ss;
     ss << n;
     return ss.str();
}

int length(string s)
{
    int i = 0;
    while(s[i] != '\0')
    {
          i++;
    }
    return i;
}

string doubleToString(int n, double v, int dec)
{
       string retorno = "";
       string partedecimal = "";
       bool activar = false;
       int contador = 0;
       int ceros = n - length(convertir(v)) - dec;
       for(int i = 0; i < ceros+1; i++)
       {
               retorno += '0';
       }   
       for(int j = 0; j < length(convertir(v)); j++)
       {
               if(convertir(v)[j] == '.')
               {
                          activar = true;
               }
               if(activar == true)
               {
                          contador++;
               }   
       }
       for(int k = contador-1; k < dec; k++)
       {
               partedecimal += '0';
       }   
       retorno += convertir(v) + partedecimal;    
       return retorno;
}

int main(int argc, char *argv[])
{
    int longitud, decimales;
    double valor;
    cout << "Ingrese el numero: ";
    cin >> valor;
    cout << "Ingrese la cantidad de cifras: ";
    cin >> longitud;
    cout << "Ingrese la cantidad de decimales: ";
    cin >> decimales;
    cout << "Resultado: " << doubleToString(longitud, valor, decimales);
    getch();
    return 0;
}
