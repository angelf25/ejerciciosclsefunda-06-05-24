#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int edad;
    int *puntero = &edad;
    cout << "Ingresa tu edad: ";
    cin >> *puntero;
    if (*puntero < 18){
        cout << "Tu eres menor de edad. " << endl;
    }
    if (*puntero>=18){
        cout << "Tu eres mayor de edad. " << endl;
    }
   else {
    cout << "Edad no valida." << endl; 
   }
   cout << "Edad ingresada: " << *puntero << endl;
   cout << "El espacio de memoria usa es el espacio: " << &puntero << endl; 
   return 0; 
}