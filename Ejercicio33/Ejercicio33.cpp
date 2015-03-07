#include <cstdlib>
#include <iostream>
#include <sstream>
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

int calcularBilletes (int& monto, int denom)
{
    int cant = monto/denom;
    monto = monto%denom;
    return cant;
}

int stringToInt(string s)
{
     int num;
     istringstream res(s);
     res >> num;
     return num;  
}

int cantDenominaciones(string s)
{
     int aux = 0;
     for(int i = 0; i < length(s); i++)
     {
             if(s[i] == ',')
             {
                 aux++;
             }
     }
     return aux+1;
}

string getTokenAt(string s, char sep, int i)
{
     string token = "";
     int contaux = 0;
     for(int j = 0; j < length(s); j++)
     {
             if(contaux == i)
             {
                 return token;         
             }
             if(s[j] == sep)
             {
                 contaux++;
             }
             if(contaux == i-1 && s[j] != sep)
             { 
                 token += s[j]; 
             }
     }
}

int main(int argc, char *argv[])
{
    int num;
    string cadena;
    cout << "Ingrese el importe: ";
    cin >> num;
    cout << "Ingrese las denominaciones (separadas por comas, no utilizar espacios): ";
    cin >> cadena;
    for(int i = 1; i < cantDenominaciones(cadena)+1; i++)
    {
            int aux = calcularBilletes(num, stringToInt(getTokenAt(cadena, ',', i)));
            if(aux > 0)
            {
                   cout <<  aux<< " Billetes de $" << getTokenAt(cadena, ',', i) << endl;
            }
    }
    getch();
    return 0;
}
