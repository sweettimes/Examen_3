#include <iostream>

int Factorial(int numero) {
    int factorial = 1;
    for (int i = 1; i <= numero; ++i) {
        factorial *= i;
    }
    return factorial;
}

using namespace std;


int main()
{   
    int opcion;
    cout << "elige la opcion que desees utilizar 1 es cajero cualquier otra opcion es el factorial" << endl;
    cin >> opcion;
    if (opcion == 1) {

        int opcion;
        int repetir;
        int saldo = 20000, dineraso;
        do {
            cout << "elige la opcion que desees utilizar " << endl;
            cout << "1:Consultar saldo, 2: Retirar efectivo" << endl;
            cin >> opcion;
            cout << endl;
            switch (opcion) {

            case 1:
                cout << "Consultar saldo: " << endl;
                cout << "Tu saldo es: " << endl;
                cout << saldo;
                cout << endl;
                break;
            case 2:
                cout << "Retirar efectivo: " << endl;
                cout << "cuanto saldo deseas retirar?: " << endl;
                cin >> dineraso;
                saldo = saldo - dineraso;
                cout << endl;
                break;
            default:
                cout << "Opción no válida." << std::endl;
                break;
            }
            cout << "desdeas regresar al menu para consultar tu saldo?:" << endl << "pulsa cualquier tecla para continuar pulsa 0 para finalizar " << endl;
            cin >> repetir;
            cout << endl;
        } while (repetir != 0);

        cout << "Estamos fuera " << endl;

    }
    else {
        int num;
        cout << "Ingrese un numero: ";
        cin >> num;
        if (num < 0) {
            cout << "No se puede calcular el factorial de un numero negativo. " << endl;
        }
        else {
            int resultado = Factorial(num);
            cout << "El factorial de: " << num << "es: " << resultado << endl;
        }
    }
}
