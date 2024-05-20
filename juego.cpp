/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// juego piedra papel o tijeras
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    int opcionuser; 
    double opcioncompu;
    int ganadas =0;
    int perdidas=0;
    int empatadas=0;
    do {
        cout << "Bienvenido/a al juego de piedra papel o tijera, elegi un numero: 1. Piedra, 2. Papel y 3. Tijeras. " "\n";
        cin >> opcionuser;
        switch(opcionuser)
    {
        case 1:
        cout << "Haz elegido piedra" "\n";
        break;
        case 2:
        cout << "haz elegido papel" "\n";
        break;
        case 3:
        cout << "haz elegido tijeras" "\n";
        break;
        default:
        cout << "ese numero no vale, ingresa otro numero" "\n";
        break;
    }
   srand(time(NULL));
   opcioncompu = (rand()%3)+1;
   if (opcioncompu==1){
       cout << "la PC elige piedra" "\n";
       }else if(opcioncompu==2){
           cout << "la PC elige papel" "\n";
       } else if(opcioncompu==3){
           cout << "la PC elige tijeras" "\n";
       }
       if(opcionuser==1 && opcioncompu==3){
           cout << "has ganado" "\n";
           ganadas++;
       }else if(opcionuser==2 && opcioncompu==1){
           cout << "has ganado" "\n";
           ganadas++;
       }else if(opcionuser==3 && opcioncompu==2){
           cout << "has ganado" "\n";
           ganadas++;
       } else if (opcionuser==opcioncompu){
           cout << "hemos empatado" "\n";
           empatadas++;
       } else {
           cout << "Has perdido" "\n";
           perdidas++;
       }
    }while (opcionuser !=0);
    cout << "has perdido en unas " << perdidas << " veces." "\n";
    cout << "has empatado en unas " << empatadas << " ocasiones" "\n";
    cout << "has ganado un unas" << ganadas << " ocasiones" "\n";
    return 0;
}
