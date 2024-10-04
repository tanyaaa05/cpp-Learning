// #include<iostream>
// using namespace std;

// //Function Declaration + Define
// int getSum(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     return sum;
// }


// int main() {
//     int n;
//     cout<<"Enter the value of n is: ";
//     cin>>n;

//     int ans=getSum(n);

//     cout<<"Sum upto "<<n<<" is "<<ans<<endl;
//     return 0;
// }



// Even Sum upto n
#include<iostream>
using namespace std;

//Function Declaration + Define
int getEvenSum(int n){
    int sum=0;
    for(int i=2;i<=n;i+=2){
        sum=sum+i;
    }
    // for(int i=1;i<=n;i++){
    //     if(i%2==0){
    //         sum=sum+i;
    //     }
    // }
    return sum;
}


int main() {
    int n;
    cout<<"Enter the value of n is: ";
    cin>>n;

    int ans=getEvenSum(n);

    cout<<"Even Sum of "<<n<<" is "<<ans<<endl;
    return 0;
}
