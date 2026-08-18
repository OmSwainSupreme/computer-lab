// A certain grade of steel is graded according to the following conditions:
// (i) Hardness must be greater than 50
// (ii) Carbon content must be less than 0.7
// (iii) Tensile strength must be greater than 5600
// The grades are as follows:
// Grade is 10 if all three conditions are met
// Grade is 9 if all conditions (i) and (ii) are met
// Grade is 8 if all conditions (ii) and (iii) are met
// Grade is 7 if all conditions (i) and (iii) are met
// Grade is 6 if only one condition is met
// Grade is 5 if none of the conditions are met
// Write a program, which will require the user to give values of hardness,
// carbon content and tensile strength of the steel under consideration and
// output the grade of the steel. (Solve using nested if-else, ladder if and else
// if)

#include <iostream>
int main()
{
    float Hardness{};
    float Carbon_Content{};
    float Tensile_Strenght{};

    std::cout << "Enter the Hardness, Carbon Content and Tensile Strength of the steel :- ";
    std::cin >> Hardness >> Carbon_Content >> Tensile_Strenght;
    if (Hardness > 50 && Carbon_Content < 0.7 && Tensile_Strenght > 5600)
    {
        std::cout << "Grade 10";
    }
    else if (Hardness > 50 && Carbon_Content < 0.7)
    {
        std::cout << "Grade 9";
    }
    else if (Carbon_Content < 0.7 && Tensile_Strenght > 5600)
    {
        std::cout << "Grade 8";
    }
    else if (Hardness > 50 && Tensile_Strenght > 5600)
    {
        std::cout << "Grade 7";
    }
    else if (Hardness > 50 || Carbon_Content < 0.7 || Tensile_Strenght > 5600)
    {
        std::cout << "Grade 6";
    }
    else
    {
        std::cout << "Grade 5";
    }
    return 0;
}