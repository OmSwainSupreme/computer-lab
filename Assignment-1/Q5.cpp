// A library charges a fine for every book return late. For first 5 days the
// fine is 50 paisa, for 6-10 days fine is one rupee and above 10 days fine is
// 5 rupees. If you return the book after 30 days your membership will be
// cancelled. WAP to accept no. of days the member is late to return the
// book and display the fine or appropriate message.

#include <iostream>
int main()
{
    int return_date{};
    std::cin >> return_date;
    if (return_date <= 5)
    {
        std::cout << "No fine";
    }
    else if (return_date > 5 && return_date <= 10)
    {
        std::cout << "Fine is 50";
    }
    else if (return_date > 10 && return_date <= 30)
    {
        std::cout << "Fine is 100";
    }
    else
    {
        std::cout << "Membership cancelled";
    }

    return 0;
}