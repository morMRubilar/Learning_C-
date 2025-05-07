// This file contains functions to check divisibility of numbers.
// It includes functions to check if a number is divisible by 2, 3, 5, and 7.
// The functions are implemented using both iterative and recursive approaches.
// The code also includes a main function to test the divisibility functions with user input.
// The code is written in C++ and uses the standard input/output library.   
#include <iostream>

int divisibleBy2(int number)
{
    return number % 2 == 0 ? 1 : 0;
}

int main()
{
    int number = 0;
    std::cout << "Ingrese un numero: ";
    std::cin >> number;
    if (divisibleBy2(number) == 1)
    {
        std::cout << "El numero " << number << " es divisible por 2." << std::endl;
    }
    else
    {
        std::cout << "El numero " << number << " no es divisible por 2." << std::endl;
    }
    return 0;
}
// This code checks if a number is divisible by 3 using an iterative approach.  
