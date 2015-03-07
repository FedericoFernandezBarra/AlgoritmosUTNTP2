#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <sstream>
#include <math.h>

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

int saint(string s)
{
     int num;
     istringstream res(s);
     res >> num;
     return num;  
}

int stringToInt(string s, int n)
{
    if(n!=16)
    {
         long a, b=0, c, d=1;
         a = saint(s);
         while(a != 0)
         {
            c=a%10;
            a=a/10;
            b=b+c*d;
            d=d*n;
         }
         return b;
    }
    else
    {
        double decimal = 0;
        int con = length(s)-1;
        for(int i = 0; i < length(s); i++)
        {
                if(s[i] == 'A')
                {
                        decimal += 10*pow(16, con);
                }
                else
                {
                    if(s[i] == 'B')
                    {
                           decimal += 11*pow(16, con); 
                    }
                    else
                    {
                        if(s[i] == 'C')
                        {
                              decimal += 12*pow(16, con);   
                        }
                        else
                        {
                            if(s[i] == 'D')
                            {
                                    decimal += 13*pow(16, con); 
                            }
                            else
                            {
                                if(s[i] == 'E')
                                {
                                        decimal += 14*pow(16, con); 
                                }
                                else
                                {
                                    if(s[i] == 'F')
                                    {
                                            decimal += 15*pow(16, con); 
                                    }
                                    else
                                    {
                                        decimal += int(s[i]-48)*pow(16, con);
                                    }
                                }
                            }
                        }
                    }
                }
                con--;
        }
        return int(decimal);
    }
}

int main(int argc, char *argv[])
{
    string cadena;
    int base;
    cout << "Ingrese una cadena de numeros y/o letras(A-F): ";
    cin >> cadena;
    cout << "Ingrese la base utilizada: ";
    cin >> base;
    cout << cadena << " base: " << base << " en decimal: " << stringToInt(cadena, base);
    getch();    
    return 0;
}
