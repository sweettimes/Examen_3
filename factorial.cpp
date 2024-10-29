#include <stdio.h>
#include <iostream>
using namespace std;
int Factorial(int numero) {
    int factorial = 1;
    for (int i = 1; i <= numero; ++i) {
        factorial *= i;
    }
    return factorial;
}
int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >>num;
    if (num < 0) {
        cout << "No se puede calcular el factorial de un numero negativo. "<<endl;
    }
    else {
        int resultado = Factorial(num);
        cout << "El factorial de: " << num << "es: " << resultado << endl;
    }

    return 0;
}
