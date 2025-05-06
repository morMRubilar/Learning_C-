#include <iostream>

// Pida por teclado numero entero y muestre si es par o impar

int parImpar(int num)
{
    if (num % 2 == 0)
    {
        std::cout << "El numero " << num << " es par." << std::endl;
    }
    else
    {
        std::cout << "El numero " << num << " es impar." << std::endl;
    }
    return 0;
}

int main()
{
    int num = 0;
    std::cout << "Ingrese un numero entero: ";
    std::cin >> num;
    parImpar(num);
    return 0;
}
// This program will ask the user for an integer and then check if it is even or odd. It will print the result to the console.
