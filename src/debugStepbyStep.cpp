// #include <iostream>

// void summ_quiz() 
// {
//     // This function is a simple calculator that takes two integers as input and performs addition and subtraction.
//     // It uses the standard input/output library to read from the console and print results.
//     // The function does not return any value.
//     // It is a demonstration of basic arithmetic operations in C++.
//     // The function is named "summ_quiz" which suggests it might be part of a quiz or exercise related to summation.
//     // The function uses standard input/output streams to interact with the user.

//     // Declare two integer variables to store user input

//     int num_1{0};
//     int num_2{0};

//     std::cout << "Ingrese un entero: ";
//     std::cin >> num_1;

//     std::cout << "Ingrese otro entero: ";
//     std::cin >> num_2;

//     std::cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << std::endl;
//     std::cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << std::endl;
// }

#include <iostream>

int main()
{
    // This program calculates the salary based on user input for the monthly salary.
    // It provides the yearly, weekly, daily, and hourly salary based on the input.
    // It also calculates the income for 5, 10, 15, and 20 years based on the monthly salary.

std::cout << "Enter wanted salary per month: ";

double monthly_sal {};

std::cin >> monthly_sal;
std::cout << '\n' << "Your wanted monthly salary is " << monthly_sal << "€.\n" << '\n';

std::cout << "Your yearly salary will be " << monthly_sal*13.5 << "€.\n" <<
"Your weekly salary will be " << (monthly_sal * 13.5) / 52.1775 << "€.\n" <<
"Your daily salary will be " << ((monthly_sal * 13.5) / 52.1775) / 5.0 << "€.\n" <<
"Your hourly salary will be " << (((monthly_sal * 13.5) / 52.1775) / 5.0) / 8.0 << "€.\n" << '\n';

std::cout << "Extra Calculations: " << '\n';

double y10 = (monthly_sal*13.5)*10, y5 = (monthly_sal*13.5)*5, y15 = (monthly_sal*13.5)*15, y20 = (monthly_sal*13.5)*20;
std::cout << "5 years income" << y5 << "€.\n";
std::cout << "10 years income" << y10 << "€.\n";
std::cout << "15 years income" << y15 << "€.\n";
std::cout << "20 years income" << y20 << "€.\n" << '\n';

std::cout << "Good luck! XD" << '\n';

return 0;
}
