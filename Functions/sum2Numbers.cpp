#include<iostream>
using namespace std;

//Function Declaration + Define
int add(int x, int y){
    int result = x + y;
    return result;
}

//Main Function
int main() {
    int a;
    cout<<"Enter the value of a is: ";
    cin>>a;

    int b;
    cout<<"Enter the value of b is: ";
    cin>>b;

    int sum = add(a,b);

    cout<<"Addition result is: "<<sum<<endl;

    return 0;
}


// #include<iostream>
// using namespace std;

// //Function Declaration 
// int add(int x, int y);

// //Main Function
// int main() {
//     int a;
//     cout<<"Enter the value of a is: ";
//     cin>>a;

//     int b;
//     cout<<"Enter the value of b is: ";
//     cin>>b;

//     int sum = add(a,b); //function call

//     cout<<"Addition result is: "<<sum<<endl;
// }

// //Function Define
// int add(int x, int y){
//     int result = x + y;
//     return result;
// }

