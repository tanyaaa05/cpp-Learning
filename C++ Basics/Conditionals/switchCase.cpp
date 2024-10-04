
// #include <iostream>
// using namespace std;

// int main(){
    
//     int val;
//     cout<<"Enter the value: ";
//     cin>>val;

//     switch(val){
//         case 1: cout<<"Tanya "<<endl;
//         break;
//         case 2: cout<<"Tarang "<<endl;
//         break;
//         //continue;  --> a continue statement may only be used within a Loop.
//         case 3: cout<<"Muskan "<<endl;
//         break;
//         case 4: cout<<"Shubh "<<endl;
//         break;
//         default: cout<<"Sunita ";

//     }

// } 


// Qn. Can we use "continue" in switch case?
// Ans. No, the continue keyword can't be used directly in a switch case,
// except when the switch is inside a loop. In that case, continue will skip 
// the rest of the loop iteration, not just the switch case. Use break to exit the switch case instead.



// Program to build a simple calculator using switch Statement
#include <iostream>
using namespace std;

int main() {
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}