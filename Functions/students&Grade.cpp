#include<iostream>
using namespace std;

char getGrade(int marks) {

    if(marks>=90){
        return 'A';
    }
    else if(marks>=80){
        return 'B';
    }
    else if(marks>=70){
        return 'C';
    }
    else if(marks>=60){
        return 'D';
    }
    else{
        return 'E';
    }

}
int main() {
    int marks;
    cout<<"Enter the marks: ";
    cin>>marks;

    char finalGrade = getGrade(marks);
    cout<<"The final grade is: "<<finalGrade<<endl;
}


// Using Switch statement
// char getGrade(int marks) {

//     switch(marks){

//         //assuming grades is between 0 to 10
//         case 10 : return 'A';
//         break;
//         case 9 : return 'A';
//         break;
//         case 8 : return 'B';
//         break;
//         case 7 : return 'C';
//         break;
//         case 6 : return 'D';
//         break;
//         default : return 'E';
//     }

// }

// int main() {
//     for(int i=0;i<=10;i++){
//         char ans=getGrade(i);
//         cout<<"Grade for marks = "<<i<<" "<<"is"<<" "<<ans<<endl;
//     }
// }
