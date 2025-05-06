// // indica si año es bisiesto muestre por pantalla es bisiesto o no es bisiesto
// // Utilizando estructura de control if y else
// #include <iostream>
// int main()
// {
//     int year = 0;
//     std::cout << "Ingrese un año: ";
//     std::cin >> year;
//     if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
//     {
//         std::cout << "El año " << year << " es bisiesto." << std::endl;
//     }
//     else
//     {
//         std::cout << "El año " << year << " no es bisiesto." << std::endl;
//     }
//     return 0;
// }


// Utilizando funcion, indique si año es bisiesto muestre por pantalla es bisiesto o no es bisiesto
#include <iostream>
int esBisiesto(int year)
{
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        return 1; // Es bisiesto
    }
    else
    {
        return 0; // No es bisiesto
    }
}
