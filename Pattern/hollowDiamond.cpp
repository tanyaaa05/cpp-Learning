// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
        
//         int k=0;

//         for(int col=0;col<((2*n)-1);col++){

//             // Spaces
//             if(col<(n-row-1)){
//                 cout<<" ";
//             }

//             // Star
//             else if(k<(2*row+1)){
//                 if(k==0 || k==2*row){
//                 cout<<"* ";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//                 k++;
//             }
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

        // Space
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }

        // Stars
        for(int col=0;col<2*row+1;col++){

            // print first and last character --> * 
            if(col==0 || col==2*row){
                cout<<"* ";
            }

            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    for(int row=0;row<n;row++){

        // Space
        for(int col=0;col<row;col++){
            cout<<" ";
        }

        // Stars
        for(int col=0;col<((2*n)-(2*row)-1);col++){

            // print first and last character --> * 
            if(col==0 || col==((2*n)-(2*row)-2)){
                cout<<"* ";
            }

            else{
                cout<<" ";
            }
        }
        cout<<endl;

    }
}