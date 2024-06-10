#include <iostream> 
using namespace std;
int main(int argc, char *argv[]){
    int x;
    int *apuntador = &x;
    cout << "Ingresa un numero entero: " ;
    cin >> *apuntador;
    delete [] apuntador;
    apuntador = NULL;
    cout << "Usted ingreso el numero: " << x << endl;
    cout << "El espacio de memoria es el espacio: " << &apuntador << endl;
    return 0;
}