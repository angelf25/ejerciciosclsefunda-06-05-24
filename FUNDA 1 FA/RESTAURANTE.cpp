#include <iostream>
using namespace std;
int main ()
{
    char opcion, variable = 'x';
    do 
    {
        cout << "Menu del dia de hoy, aprovecha"<<"\n";
        cout << "A. Carne asada con arroz"<<"\n";
        cout << "B. Hamburguesas con papas y soda"<<"\n";
        cout << "C.Chicharrones con ensalada"<<"\n";
        cout << "Seleccione una opcion"<<"\n";
        cin >> opcion;
        cout << "opcion elegida"<< opcion << "\n";
        
    }
    while (opcion != variable);
    
    return 0; 
}