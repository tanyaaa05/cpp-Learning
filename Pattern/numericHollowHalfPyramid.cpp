#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    cout<<endl;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){

            // Number printing condition
            if(col==0 || col==row || row==n-1){
            cout<<col+1<<" ";
            }

            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}