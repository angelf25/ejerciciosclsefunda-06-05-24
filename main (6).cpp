#include <iostream> 
using namespace std;
int resta(int x, int y){
    return x-y;
}
int suma(int x, int y){
    return x+y;
}
int mult(int x, int y){
    return x*y;
}
int dividir(int x, int y){
    return x/y;
}
int main(){
    int a,b,opc;
    cout << "Ingrese numeros entero a= " ;
    cin >> a;
    cout << "Ingrese un numero entero b= " ;
    cin >> b;
    cout << "ELIJA LA OPCION DESEADA: \n\t1. Restar \n\t2. Sumar \n\t3. Multiplicar \n\t4. Dividir \n\tOtronumero: salir \n";
    cout << "Su opcion es: " ;
    cin >> opc;
    switch(opc){
        case 1:
        cout << "Has elgido la opcion de restar" << endl ;
        cout << "El resultado de restar es " << a << " - " << b << " es " << resta(a,b);
        break;
        case 2:
        cout << "Has elgido la opcion de suma" << endl ;
        cout << "El resultado de restar es " << a << " + " << b << " es " << suma(a,b);
        break;
        case 3:
        cout << "Has elgido la opcion de multiplicar" << endl ;
        cout << "El resultado de multiplicar es " << a << " * " << b << " es " << mult(a,b);
        break;
        case 4:
        cout << "Has elgido la opcion de dividir" << endl ;
        cout << "El resultado de dividir es " << a << " / " << b << " es " << dividir(a,b);
        break;
        default:
        cout << "Has elegido la opcion de salir, ADIOS.";
        break;
    }
    return 0;
}