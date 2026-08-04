// #include <iostream>
// int main(){
//     std::cout<<"Hello World"<<std::endl<<"I am Om Prakash Swain"<<"herre I am going to insert a tab\tthe text after applying tab\n";
//     std::cout<<"Here i am using alarm sound \atext after alarm sound\n";
//     std::cout<<"this text is the prostfix\rThis text is the PREFIX   ";
//     return 0;
// }

// #include <iostream>
// int main(){
//     double celcius {};
//     std::cin>>celcius;
//     std::cout<<"The temprature in Farenheit is :-  "<<((celcius*9)/5)+32;
//     return 0;
// }

// #include <iostream>
// int main(){
//     int Basic_salary {};
//     std::cin>>Basic_salary;
//     double da {Basic_salary*0.46};
//     double ta {Basic_salary*0.8};
//     double HRA {Basic_salary*0.9};
//     double Gross_Salary{Basic_salary+da+ta+HRA};
//     std::cout<<"The Gross salary of the indivisual is :- "<<Gross_Salary;
//     return 0;
// }

// #include <iostream>
// int main()
// {
//     float Hardness{};
//     float Carbon_Content{};
//     float Tensile_Strenght{};

//     std::cout << "Enter the Hardness, Carbon Content and Tensile Strength of the steel :- ";
//     std::cin >> Hardness >> Carbon_Content >> Tensile_Strenght;
//     if (Hardness > 50 && Carbon_Content < 0.7 && Tensile_Strenght > 5600)
//     {
//         std::cout << "Grade 10";
//     }
//     else if (Hardness > 50 && Carbon_Content < 0.7)
//     {
//         std::cout << "Grade 9";
//     }
//     else if (Carbon_Content < 0.7 && Tensile_Strenght > 5600)
//     {
//         std::cout << "Grade 8";
//     }
//     else if (Hardness > 50 && Tensile_Strenght > 5600)
//     {
//         std::cout << "Grade 7";
//     }
//     else if (Hardness > 50 || Carbon_Content < 0.7 || Tensile_Strenght > 5600)
//     {
//         std::cout << "Grade 6";
//     }
//     else
//     {
//         std::cout << "Grade 5";
//     }
//     return 0;
// }

// #include <iostream>
// int main(){
//     int return_date{};
//     std::cin>>return_date;
//     if (return_date<=5){
//         std::cout<<"No fine";
//     }
//     else if (return_date>5 && return_date<=10){
//         std::cout<<"Fine is 50";
//     }
//     else if (return_date>10 && return_date<=30){
//         std::cout<<"Fine is 100";
//     }
//     else{
//         std::cout<<"Membership cancelled";
//     }

//     return 0;
// }



#include <iostream>
int main(){
    int i;
    for (i=0; i<10 ;i++){
        std::cout<<i<<std::endl;
    }
    for (;i=0; i++){
        std::cout<<i<<std::endl;
    }
    for (;i<10;){
        i++;
        std::cout<<i<<std::endl;
    }
    return 0;
}