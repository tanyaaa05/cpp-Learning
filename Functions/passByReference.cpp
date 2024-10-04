// In C++, "pass by reference" allows you to pass the reference (address) 
// of a variable to a function rather than passing the value. This means 
// any changes made to the parameter inside the function will directly affect 
// the argument passed to the function.


#include <iostream>
using namespace std;

// Function to swap two numbers using pass by reference
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10;
    int b = 20;

    cout << "Before swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Passing a and b by reference
    swap(a, b);

    cout << "After swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
