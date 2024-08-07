// #Assignment 1

// #include<iostream>
// using namespace std;
// int main(){
//     char ab;
//     cout<<"Enter the Character: ";
//     cin>>ab;
//     if(ab=='a'||ab=='e'||ab=='i'||ab=='o'||ab=='u'||ab=='A'||ab=='E'||ab=='I'||ab=='O'||ab=='U'){
//         cout<<"Vowel";
//     }
//     else{
//         cout<<"Consonant";
//     }
// }


//Assignment 2

#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Enter Second Number: ";
    cin>>num2;
    cout<<"Enter Third Number: ";
    cin>>num3;
    if(num1>num2 && num1>num3){
        cout<<"%d Number is Greater."<<num1;
    }
    else if(num2>num3 && num2>num1){
        cout<<"%d is Greater."<<num2;
    }
    else{
        cout<<"%d is Greater."<<num3; 
    }
}