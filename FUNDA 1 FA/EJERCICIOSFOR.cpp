#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "ingrese un numero entero, no metas decimales que te conozco: ";
    cin >> n;
    for (int i=2 ; i<=n ; i= i+2)
    { cout << i << "\n";
    }
    return 0;
}
