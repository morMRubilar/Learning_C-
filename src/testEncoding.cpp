// #include <iostream>

// // We want to test the following function
// // For simplicity, we'll ignore that 'y' is sometimes counted as a vowel
// bool isLowerVowel(char c)
// {
//     switch (c)
//     {
//     case 'a':
//     case 'e':
//     case 'i':
//     case 'o':
//     case 'u':
//         return true;
//     default:
//         return false;
//     }
// }

// int main()
// {
//     // So here's our temporary tests to validate it works
//     std::cout << isLowerVowel('a') << '\n'; // temporary test code, should produce 1
//     std::cout << isLowerVowel('q') << '\n'; // temporary test code, should produce 0

//     return 0;
// }

#include <iostream>
#include <string>

int main() {
    std::string nombre;

    std::cout << "¿Cómo te llamás? ";
    std::getline(std::cin, nombre);

    std::cout << "¡Hola, " << nombre << "! ¿Cómo estás? 😊\n";
    std::cout << "Probando acentos: á é í ó ú ñ ¡ ¿\n";

    return 0;
}
// This program will ask the user for their name and greet them. It also tests the display of accented characters and special symbols.
// It uses the C++20 standard for string handling and input/output operations.
