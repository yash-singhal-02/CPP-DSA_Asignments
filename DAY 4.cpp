#include<iostream>
using namespace std;
class Book{
	public:
	string title;
	string author;
	int year;
	Book(string ath, string tit, int yr){
		title = tit;
		author = ath;
		year = yr;
	}
	void displayinfo(){
		cout<<"Title of Book is "<<title<<endl;
		cout<<"Author of Book is "<<author<<endl;
		cout<<"Book is Published in "<<year<<endl;
	}
};
int main(){
	Book book1("V.S.Naipul","A Bend in the river",1979);
	book1.displayinfo();	
}