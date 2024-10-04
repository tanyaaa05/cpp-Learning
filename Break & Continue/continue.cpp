#include<iostream>
using namespace std;
int main() {
    int n=5;
    for(int i=0;i<n;i++){
        // cout<<"Tanya"<<" ";
        continue;
        cout<<"Tanya"<<endl;
    }

    for(int i=0;i<n;i++){
        if(i==2){
            continue;
        }
        cout<<i<<" ";    
    }
}