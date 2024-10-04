#include<iostream>
using namespace std;
int main() {
    
    int n,m;
    cin>>n;
    cin>>m;
    
    // Method 1 for hollow rectangular pattern
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            if(row==0 || row==n-1 || col==0 || col==m-1){
                cout<<"* ";
            }  
           else{
            cout<<"  ";
           } 
        }
        cout<<endl;
    }


    // Method 2 for hollow rectangular pattern  
    // for(int row=0;row<n;row++){
    //     //first row and last row --> print *
    //     if(row==0 || row==n-1){
    //         for(int col=0;col<m;col++){
    //             cout<<"* ";
    //         }
    //     }
    //     else{
    //         //remaining middle rows
    //         //first star
    //         cout<<"* ";
    //         //spaces --> number of columns - 2
    //         for(int i=0;i<m-2;i++){
    //             cout<<"  ";
    //         }
    //         //last star
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }  
    

    // Method 3 for hollow rectangular pattern
    // Generic code for hollow rectangular pattern
    // int rowCount;
    // int colCount;
    // cin>>rowCount;
    // cin>>colCount;
    // for(int row=0;row<rowCount;row++){
    //     //first row and last row --> print 5 *
    //     if(row==0 || row==rowCount-1){
    //         for(int col=0;col<colCount;col++){
    //             cout<<"* ";
    //         }
    //     }
    //     else{
    //         //remaining middle rows
    //         //first star
    //         cout<<"* ";
    //         //spaces --> number of columns - 2
    //         for(int i=0;i<colCount-2;i++){
    //             cout<<"  ";
    //         }
    //         //last star
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // } 

}