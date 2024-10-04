#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    for(int row=0;row<n;row++){
        int cond=(row<=n/2) ? 2*row : (2*(n-row-1));
        for(int col=0;col<=cond;col++){

            if(col==0){
                cout<<"*";

            }

            // ColumnWise Growing phase condition
            if(col<=cond/2){
                cout<<col+1;
            }
            // ColumnWise Shrinking phase condition
            else{
                cout<<cond-col+1;
            }
        }
        cout<<endl;
    }

}