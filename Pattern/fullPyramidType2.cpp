// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
    
// Full Pyramid
//     for(int row=0;row<n;row++){

//         // Spaces
//         for(int col=0;col<n-row-1;col++){
//              cout<<"  ";
//         }

//         // Star
//         for(int col=0;col<row+1;col++){
//              cout<<"* ";
//         }

//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    

    for(int row=0;row<n;row++){
        int k=0;
        // Full Pyramid
        for(int col=0;col<((2*n)-1);col++){

            // Spaces
            if(col<n-row-1){
                cout<<"  ";
            }
            
            //star printing
            else if(k<row+1){
                cout<<"*  ";
                k++;
            }
            else{
                cout<<"  ";
            }
        }

        cout<<endl;
    }
}