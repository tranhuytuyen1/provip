#include<iostream>
using namespace std;

#define passw 1234
int main(){
	int PASSW=0;
	cout<<"Nhap ma bin = ";
	cin>> PASSW;
	if(PASSW==passw){
		cout<<"linh ngu "<<endl;
	}else{
		cout<<"non vl "<<endl;
	}
	cout<<"tam biet"<<endl;	
}

