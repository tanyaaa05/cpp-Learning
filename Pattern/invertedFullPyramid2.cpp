// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){

//         // Spaces
//         for(int col=0;col<row;col++){
//              cout<<" ";
//         }

//         // Star
//         for(int col=0;col<n-row;col++){
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
            if(col<row){
                cout<<" ";
            }
            
            //star printing
            else if(k<n-row){
                cout<<"* ";
                k++;
            }
            else{
                cout<<" ";
            }
        }

        cout<<endl;
    }
    
}