#include<iostream>
using namespace std;
int main(){
	int a,b;
	char c;
	cout<<"Enter Fisrt Number: ";
	cin>>a;
	cout<<"Enter Second Number: ";
	cin>>b;
	cout<<"Enter the operator: ";
	cin>>c;
	switch(c){
		case '+':
			cout<<a+b;
			break;
		case '-':
			cout<<a-b;
			break;
		case '*':
			cout<<a*b;
			break;
		case '/':
			cout<<a/b;
			break;
	}
}