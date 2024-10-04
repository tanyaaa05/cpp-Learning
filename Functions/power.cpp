#include<bits/stdc++.h>
using namespace std;
    long long pow(int N, int k){
        if(k<=0){
            return 1;
        }
        else{
            return N*pow(N,k-1);
        }
    }
int main(){
    int t;
    cin>>t;
    while(t--){
        int N,k;
        cin>>N>>k;
        cout<<pow(N,k) <<endl;
    }
    return 0;
}