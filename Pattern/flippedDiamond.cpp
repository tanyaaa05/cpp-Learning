#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    for(int row=0;row<n;row++){

        // Inverted Half Pyramid --> 01
        for(int col=0;col<n-row;col++){
             cout<<"* ";
        }

        // Space wala Full Pyramid  --> 02
        for(int col=0;col<2*row+1;col++){
             cout<<"  ";
        }

        // Inverted Half Pyramid  --> 03
        for(int col=0;col<n-row;col++){
             cout<<"* ";
        }
        cout<<endl;
    }

    for(int row=0;row<n;row++){

        // Half Pyramid --> 04
        for(int col=0;col<row+1;col++){
             cout<<"* ";
        }

        // Space wala Inverted Full Pyramid  --> 05
        for(int col=0;col<((2*n)-(2*row)-1);col++){
             cout<<"  ";
        }

        // Half Pyramid  --> 06
        for(int col=0;col<row+1;col++){
             cout<<"* ";
        }
        cout<<endl;
    }
}