// Differentiate between private and public access/scope. Perform the question no. 5
// with structure having the data member in private scope. Students should be able to
// a) differentiate between structure in C vs structure in C++

#include <iostream>
#include <string>
using namespace std;
namespace mynamespace
{
    void show()
    {
        cout << "Private in main namespace";
    }
    struct MyStruct
    {
        int privateVar; // Private member
        void privateFunc()
        {
            cout << "Private funcƟon in struct";
        }
        void publicFunc()
        {
            cout << "Public funcƟon in struct" << endl;
        }
    };
}
int main()
{
    mynamespace::MyStruct s;
    s.publicFunc();      // Legal
    mynamespace::show(); // Legal (sibling namespace)
    return 0;
}
