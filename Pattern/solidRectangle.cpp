#include<iostream>
using namespace std;
int main() {

int n,m;
cin>>n;
cin>>m;
    // Outer Loop
    for(int row=0;row<n;row++){

        // Inner Loop
        for(int col=0;col<m;col++){
            cout<<"*  ";
        }
        cout<<endl;
    }
}