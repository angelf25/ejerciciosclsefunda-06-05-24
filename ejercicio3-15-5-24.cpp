/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main(){
    float alpha;
    cout << "ingresa una angulo: " "\n";
    cin >> alpha;
    if(alpha>90){
        cout << "tu angulo es un angulo obtuso." "\n";
    }
    if (alpha<90){
        cout << "Tu angulo es un angulo agudo." "\n";
    }
    if (alpha==90){
        cout << "Tu angulo es un angulo recto." "\n";
    }
    return 0; 
}