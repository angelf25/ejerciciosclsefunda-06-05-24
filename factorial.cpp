/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main(){
    int n, m=1;
    cout << "ingresa un numero: " "\n";
    cin >> n;
    for (int i=1 ; i <= n; i++)
    {
        m=m*i;
    }
    cout << "el factorial de "<< n << " es "<< m << "\n";
    return 0;
}