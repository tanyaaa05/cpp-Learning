#include<iostream>
using namespace std;

//n is a parameter
void printCounting(int n) {
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
}

//Main Function
int main() {
    int n;
    cout<<"Enter the value of n is: ";
    cin>>n;

    //n is argument
    printCounting(n);
    return 0;
}
