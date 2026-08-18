// Create a code snippet that illustrates the following:
// a. Calling of private member functions inside public member function
// b. Access private member functions inside public member function
#include <iostream>
using namespace std;

class MyClass {
private:
    void privateFunc() {
        cout << "Private function called" << endl;
    }

public:
    void publicFunc() {
        cout << "Public function called" << endl;
        privateFunc(); // Calling private function from public function
    }
};

int main() {
    MyClass obj;
    obj.publicFunc(); // This will call both public and private functions
    return 0;
}