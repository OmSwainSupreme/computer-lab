// WAP to demonstrate for, while, do-while (with all possible variations), like for loop
// can be demonstrated without giving initialization in for construct or without giving
// increment in for construct.
// Sample:
// for (int i=0; i<10; i++)
// i=0
// for (; i<10; i++)
// i=0
// for (; i<10;)
// i++

#include <iostream>
int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        std::cout << i << std::endl;
    }
    for (; i = 0; i++)
    {
        std::cout << i << std::endl;
    }
    for (; i < 10;)
    {
        i++;
        std::cout << i << std::endl;
    }

    // for while loop
    int j = 0;
    while (j < 10)
    {
        std::cout << j << std::endl;
        j++;
    }
    j = 0;
    while (j < 10)
    {
        std::cout << j << std::endl;
        j++;
    }
    // for do while loop
    int k = 0;
    do
    {
        std::cout << k << std::endl;
        k++;
    } while (k < 10);
    return 0;
}