#include<iostream>
using namespace std;
int main() {
    int a=10;
    int b=6;
    int c=8;
    int d=7;

    int ans=((a+b*(a%(c*a)/2))+((d%c)-b));

    cout<<ans;
    

}