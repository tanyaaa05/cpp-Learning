#include<iostream>
using namespace std;
int main() {
    int age;
    cin>>age;
 
    if(age<18){
        cout<<"Not eligible for job";
    }
    else if(age>=18 && age<=54){
         cout<<"Eligible for job";
    }
    else if(age<=57){
         cout<<"Eligible for job but retirement soon";
    }
    else{
         cout<<"retirement";
    } 

}


