/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main (){
    float alpha;
    float beta;
    float gamma;
    cout << "ingresa un angulo, con rango de 0° a 180°, no pongas mayores que te conozco: " "\n";
    cin >> alpha;
    cout << "ingresa otro angulo, con rango de 0° a 180°, no pongas mayores que te conozco: " "\n";
    cin >> beta;
    if ((alpha+beta)>180){
        cout << "ingresa otros valores, ese angulo no existe bro, sorry" "\n";
    }
    else {
        cout <<"Tu angulo resultante es de " << (gamma=180-(alpha+beta))<< " grados " "\n";
    } 
    return 0;
}
