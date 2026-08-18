// Write a program (WAP) to display "Hello World" on console display. WAP to
// implement the following control characters:
// ‘\n’ is for new line, or you can use endl – cout<<endl<<“message”;
//  ‘\t’ is for tab ; ‘

#include <iostream>
int main()
{
    std::cout << "Hello World" << std::endl
              << "I am Om Prakash Swain" << "here I am going to insert a tab\tthe text after applying tab\n";
    std::cout << "Here i am using alarm sound \atext after alarm sound\n";
    std::cout << "this text is the prostfix\rThis text is the PREFIX   ";
    return 0;
}