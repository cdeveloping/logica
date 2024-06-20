#include <iostream>
using namespace std;

int main(){
    cout << "En este ejercicio hay que crear ejemplos con todo los operadores del lenguaje";

    cout << "*** Aritméticos ***" << endl;

    cout << "La suma de 10 + 15 es: " << 10 + 15 << endl;

    cout << "La resta de 15 - 10 es: " << 15 - 10 << endl;

    cout << "La multiplicación de 10 * 8 es: " << 10 * 8 << endl;

    cout << "La división de 9 entre 3 es: " << 9 / 3 << endl;

    cout << "El resto de la división entre 8 y 3 es: " << 8 % 3 << endl;

    cout << "*** Lógicos ***" << endl;

    bool esVerdadero = !false;
    bool esFalso = !true;

    cout << "El valor de esVerdadero es: " << esVerdadero << endl;

    cout << "El valor de esFalso es: " << esFalso << endl;

    cout << "*** DE COMPARACIÓN ***" << endl;

    cout << "Igualdad (==)" << endl;

    cout << "Desigualdad (!=)" << endl;

    cout << "Mayor que (>)" << endl;

    cout << "Menor que (<)" << endl;

    cout << "Mayor o igual que (>=)" << endl;

    cout << "Menor o igual que (<=)" << endl;

    cout << "*** Asignación ***" << endl;

    cout << "Asignación simple (=)" << endl;

    cout << "Asignación compuesta ( +=, -=, *=, /=, %=)" << endl;

    cout << "*** UNARIOS ***" << endl;

    cout << "Pre-Incremento (++, ++)" << endl;

    cout << "Pre-Decremento (-,-)" << endl;

    cout << "Post-Incremento (x++)" << endl;

    cout << "Post-Decremento (x-) " << endl;

    cout << "*** ESTRUCTURAS DE CONTROL ***" << endl;

    int a = 10;
    int b = 15;

    if(a < b) {
        cout << "La variable a es menor que b";
    }else{
        cout << "La variable a no es menor que la variable b" << endl;
    }


}