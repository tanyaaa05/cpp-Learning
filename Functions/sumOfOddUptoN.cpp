#include<iostream>
using namespace std;

//Function Declaration + Define
int getOddSum(int n){
    int sum=0;
    for(int i=1;i<=n;i+=2){
        sum=sum+i;
    }
    // for(int i=1;i<=n;i++){
    //     if(i%2==1){
    //         sum=sum+i;
    //     }
    // }
    return sum;
}


int main() {
    int n;
    cout<<"Enter the value of n is: ";
    cin>>n;

    int ans=getOddSum(n);

    cout<<"Odd Sum of "<<n<<" is "<<ans<<endl;
    return 0;
}
