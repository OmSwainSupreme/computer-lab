// Write a C++ program that will ask for a temperature in Celsius and display it in
// degree Fahrenheit.[F=9C/5+32]

#include <iostream>
int main()
{
    double celcius{};
    std::cin >> celcius;
    std::cout << "The temprature in Farenheit is :-  " << ((celcius * 9) / 5) + 32;
    return 0;
}