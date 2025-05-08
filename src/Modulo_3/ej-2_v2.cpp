//Programa: Calculadora simple en C++
//Descripción: Este programa implementa una calculadora simple que permite al usuario realizar operaciones matemáticas básicas como suma, resta, multiplicación y división. El programa utiliza funciones para cada operación y un menú para interactuar con el usuario. Además, incluye validación de opciones y manejo de errores, como la división por cero.


#include <iostream>
using namespace std;

// Función para sumar dos números
float sumar(float a, float b) {
    return a + b;
}

// Función para restar dos números
float restar(float a, float b) {
    return a - b;
}

// Función para multiplicar dos números
float multiplicar(float a, float b) {
    return a * b;
}

// Función para dividir dos números
float dividir(float a, float b) {
    return a / b;
}

// Función para obtener una opción válida del usuario
int obtenerOpcionValida() {
    int opcion;
    do {
        cout << "Seleccione una opcion (1-5): ";
        cin >> opcion;

        if (opcion < 1 || opcion > 5) {
            cout << "Opcion invalida. Intente nuevamente." << endl;
        }

    } while (opcion < 1 || opcion > 5);

    return opcion;
}

int main() {
    int opcion;
    float num1, num2, resultado;

    do {
        // Mostrar el menú
        cout << "\n=== CALCULADORA ===" << endl;
        cout << "1. Sumar dos numeros" << endl;
        cout << "2. Restar dos numeros" << endl;
        cout << "3. Multiplicar dos numeros" << endl;
        cout << "4. Dividir dos numeros" << endl;
        cout << "5. Salir" << endl;

        // Obtener una opción válida del usuario
        opcion = obtenerOpcionValida();

        // Procesar la opción seleccionada
        switch (opcion) {
            case 1:
                // Solicitar los dos números al usuario
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;

                // Calcular y mostrar el resultado de la suma
                resultado = sumar(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;

            case 2:
                // Solicitar los dos números al usuario
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;

                // Calcular y mostrar el resultado de la resta
                resultado = restar(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;

            case 3:
                // Solicitar los dos números al usuario
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;

                // Calcular y mostrar el resultado de la multiplicación
                resultado = multiplicar(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;

            case 4:
                // Solicitar los dos números al usuario
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;

                // Verificar que el divisor no sea cero
                if (num2 == 0) {
                    cout << "Error: No se puede dividir por cero." << endl;
                } else {
                    // Calcular y mostrar el resultado de la división
                    resultado = dividir(num1, num2);
                    cout << "Resultado: " << resultado << endl;
                }
                break;

            case 5:
                // Salir del programa
                break;

            default:
                // Esta sección no debería alcanzarse debido a la validación previa
                cout << "Opcion invalida. Intente nuevamente." << endl;
                break;
        }

    } while (opcion != 5);

    return 0;
}
