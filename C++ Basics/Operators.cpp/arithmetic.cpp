#include<iostream>
using namespace std;
int main(){
    int a=9;
    int b=2;

    //arithmetic operator
    cout<<(a*b)<<endl;
    cout<<(a/b)<<endl;
    cout<<(a%b)<<endl;

    //relational operator
    cout<<(a>=b)<<endl;

    //logical operator
    cout<<((a>=5) && (b<=1))<<endl;
    cout<<((a>=5) || (b<=3))<<endl;
    cout<<(!(a>9))<<endl;
    cout<<(!(a>=9));
}