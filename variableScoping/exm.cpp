#include<iostream>
using namespace std;

int raja=420;  // --> Here raja is the Global variable that 
// can be accessed from any part of the program.

int main() {

    // declaration
    int a;
    a=9;

    // initalisation
    int b=5;

    // updation
    b=10;

    cout<<raja<<endl;

        if(true){
            int b=15;
            cout<<b<<endl;
            cout<<raja<<endl;
        }

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<raja<<endl;
         
}



// In general, the scope is defined as the extent up to which something can be worked with.
// In programming also the scope of a variable is defined as the extent of the program code 
// within which the variable can be accessed or declared or worked with. 

// There are mainly two types of variable scopes: 

// (1). Local Variables -
// Variables defined within a function or block are said to be local to those functions.  
// --> Anything between ‘{‘ and ‘}’ is said to inside a block.
// --> Local variables do not exist outside the block in which they are declared, i.e. they can not be accessed or used outside that block.
// --> Declaring local variables: Local variables are declared inside a block.

// (2). Global Variables -
// Global Variables can be accessed from any part of the program.
// --> They are available through out the life time of a program.
// --> They are declared at the top of the program outside all of the functions or blocks.
// --> Declaring global variables: Global variables are usually declared outside of all of the functions and blocks, 
// at the top of the program. They can be accessed from any portion of the program.