// Implement namespace in a program to illustrate the use of same name variables and
// functions in different sections/libraries of the code.

#include <iostream>
namespace first
{
    int value = 10;
    void display() { std::cout << "First namespace value: " << value; }
}
namespace second
{
    int value = 20;
    void display() { std::cout << "Second namespace value: " << value; }
}
int main()
{
    first::display();
    std::cout << "\n";
    second::display();
    return 0;
}