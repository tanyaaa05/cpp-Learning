#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    for(int row=0;row<n;row++){
        
        //half fancy pyramid pattern
        for(int col=0;col<row+1;col++){
            cout<<row+1;

            // If not a last character then print *
            if(col!=row){
                cout<<"*";
            }
        }
        cout<<endl;
    }

    for(int row=0;row<n;row++){
        
        // Inverted half fancy pyramid pattern
        for(int col=0;col<n-row;col++){
            cout<<n-row;

           // If not a last character then print *
            if(col!=n-row-1){
                cout<<"*";
            }
        }
        cout<<endl;
    }

}
