// Create a structure in C++ containing the details of Students as details below and a
// main function to execute the structure.
//  Data Members(properties):
// Name
// Roll No
// Degree
// Hostel
// CurrentCGPA
//  Member Function(behavior):
// addDetails();
// updateDetails();
// updateCGPA();
// updateResidenceInfo();
// displaydetails();

#include <iostream>
using namespace std;
struct Student
{
    string name;
    int roll;
    char degree[10];
    string hostel;
    float cgpa;
    void addDetails()
    {
        cin >> name >> roll;
        cin >> degree >> hostel >> cgpa;
    }
    void updateDetails()
    {
        name = 'O';
        roll = 1;
    }
    void updateCGPA()
    {
        cgpa = 8.5;
    }
    void updateResidenceInfo()
    {
        hostel = 'A';
    }
    void displaydetails()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};
int main()
{
    Student s1;
    s1.addDetails();
    s1.displaydetails();
    return 0;
}
