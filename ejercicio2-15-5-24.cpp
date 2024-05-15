/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std; 
int main(){
    int edad;
    cout <<"ingresa tu edad bro, te dire algo que no sabias: " "\n";
    cin >> edad;
    if (edad>18){
        cout << "ya eres mayor de edad bro, bienvenido al mundo adulto, ahora paga tus impuestos." "\n";
    }
    if (edad<18){
        cout << "todavia no eres mayor de edad, te salvas del mundo adulto, por el momento" "\n";
    }
    if(edad>100){
        cout << "wenas señor, te quiero preguntar, cuantos dinosaurios viste?" "\n";
    }
    return 0;
}