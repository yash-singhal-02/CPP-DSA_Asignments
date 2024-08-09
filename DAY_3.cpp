#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter value of a: "<<endl;
	cin>>a;
	cout<<"Enter value of b: "<<endl;
	cin>>b;
	cout<<"Enter value of c: "<<endl;
	cin>>c;
	int *ptr1 = &a;
	int *ptr2 = &b;
	int *ptr3 = &c;
	int sum = *ptr1+(*ptr2)+(*ptr3);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	cout<<"c: "<<c<<endl;	
	cout<<"Sum is: "<<sum;
	
}