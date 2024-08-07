 #Assignment 1

#include<iostream>
using namespace std;
int main(){
     char ab;
     cout<<"Enter the Character: ";
     cin>>ab;
     if(ab=='a'||ab=='e'||ab=='i'||ab=='o'||ab=='u'||ab=='A'||ab=='E'||ab=='I'||ab=='O'||ab=='U'){
         cout<<"Vowel";
     }
     else{
         cout<<"Consonant";
     }
}


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


//Assignment 3

#include<iostream>
using namespace std;
void func(int a,int b,int c){
    int res = a+b+c;
    cout<<"Sum is "<<res;
}
int main(){
    int a,b,c;
    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Numeber: ";
    cin>>b;
    cout<<"Enter Third Number: ";
    cin>>c;
    func(a,b,c);
}


//Assignment 4

#include<iostream>
#include<math.h>
using namespace std;
void func(int a){
    int res = sqrt(a);
    cout<<res<<" is the Squareroot.";
}
int main(){
    int a;
    cout<<"Enter Number: ";
    cin>>a;
    func(a);
}
