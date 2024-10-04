#include<iostream>
using namespace std;
int main(){
    
    //ASCII value of character 98 is b
    char ch=98;
    cout<<"Value of ch is:"<<ch<<endl;

    //value of character 'b' in ASCII table is 98
    int num='b';
    cout<<num<<endl;

    //Explicit type conversion
    double d=6.7;
    int x=(int)d+6;
    cout<<"Value of x is:"<<x<<endl;

    // Flag is a variable name that gives the boolean value.
    bool flag=true;  
    cout<<"Value of flag is:"<<flag<<endl;

   //Declares the float and char dataType size
   char a='8';
   cout<<sizeof(a)<<endl; 
   float b=8;
   cout<<sizeof(b)<<endl;   
  

   //Type conversion
   cout<<int(5.2)/3;
}