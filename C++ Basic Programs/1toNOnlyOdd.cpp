#include<iostream>
using namespace std;
 int main () {
    
    cout<<"Enter the number: ";
    int n;
    cin>>n;

    for(int i=1;i<n;i++){
        if(i%2==1){
            cout<<"Odd number: "<<i<<endl;
        }
    }
}