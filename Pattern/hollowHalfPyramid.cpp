#include<iostream>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    cout<<endl;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(row==n-1 || col==0 || col==row){
                cout<<"* ";
            }  
           else{
            cout<<"  ";
           } 
        } 
        cout << endl;
    }
   
}


