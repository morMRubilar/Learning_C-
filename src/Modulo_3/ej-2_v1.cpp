// Menu que simula calculadora de 2 numeros, aplicando funciones y estructura do while
#include <iostream>

using namespace std;

// Funciones para cada operación
double sumar(double a, double b) {
    return a + b;
}

double restar(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

double dividir(double a, double b) {
    if (b == 0) {
        cout << "\nError: No se puede dividir por cero." << endl;
        return 0;
    }
    return a / b;
}

int main() {
    int opcion;
    double num1, num2, resultado;

    do {
        // Mostrar menú
        cout << "\n=== CALCULADORA ===" << endl;
        cout << "1. Sumar dos numeros" << endl;
        cout << "2. Restar dos numeros" << endl;
        cout << "3. Multiplicar dos numeros" << endl;
        cout << "4. Dividir dos numeros" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion (1-5): ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                resultado = sumar(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;
            case 2:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                resultado = restar(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;
            case 3:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                resultado = multiplicar(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;
            case 4:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                resultado = dividir(num1, num2);
                if (num2 != 0) {
                    cout << "Resultado: " << resultado << endl;
                }
                break;
            case 5:
                cout << "Salir del programa" << endl; // Salir del programa
                break;
            default:
                cout << "Opcion invalida. Seleccione opcion valida." << endl;
                break;
        }

    } while (opcion != 5);

    return 0;
}

