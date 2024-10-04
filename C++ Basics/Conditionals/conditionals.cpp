#include<iostream>
using namespace std;
int main() {

    // declare a integer type variable
    int score;

    // print even score
    cout<<"Enter the score: ";

    //take input into score variable
    cin>>score;

    // if condition
    if(score<300){
        cout<<"India wins!"<<endl;
    }
    else{
        cout<<"Pakistan wins!"<<endl;
    }
}