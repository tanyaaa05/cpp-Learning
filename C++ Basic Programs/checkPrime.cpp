#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num;

    bool isPrime = true;

    if (num <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
            else {
                isPrime = true;
            }
        }
    }

    if (isPrime == true) {
        cout << num << " is a prime number." << endl;
    } 
    else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}









