/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std; 
int main(){
    int horas ;
    string nombre;
    int sueldo;
    cout << "ingrese la cantidad de horas trabajadas: "<< "\n";
    cin >> horas;
    cout << "ingresa tu nombre: " << "\n";
    cin >> nombre; {
        if ( horas <161)
        cout <<"Tu sueldo es de "<< (sueldo=horas*10) <<" dolares" "\n";
    }
    {if (horas>160)
    cout << "tu sueldo es de "<< (sueldo=(horas-160)*15 + 1600)<< " dolares" "\n";
    } {
        if (sueldo<2001)
        cout << "Tu sueldo esta libre de impuestos" << "\n";
    } {
        if (sueldo>2000 && sueldo<2201)
        cout << "tu sueldo con impuestos del 20 por ciento es de " << (sueldo-(sueldo*0.2)) << "\n";
    } {
        if (sueldo>2200)
        cout << "tu sueldo con impuestos del 30 por ciento es de "<< (sueldo-(sueldo*0.3)) << "\n";
    }
    return 0;
    
}