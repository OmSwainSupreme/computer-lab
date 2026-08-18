// WAP to calculate gross salary of a person, where gross_salary = basic+da+ta+HRA and
// da is 46% of basic and ta is 8% of basic and HRA is 9% of basic pay.

#include <iostream>
int main()
{
    int Basic_salary{};
    std::cin >> Basic_salary;
    double da{Basic_salary * 0.46};
    double ta{Basic_salary * 0.8};
    double HRA{Basic_salary * 0.9};
    double Gross_Salary{Basic_salary + da + ta + HRA};
    std::cout << "The Gross salary of the indivisual is :- " << Gross_Salary;
    return 0;
}
