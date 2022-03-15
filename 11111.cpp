#include<iostream>
using namespace std;

int main(){
	int a,b;
	char opera;
	cout<<"nhap 2 so nguyen a ,b"<<endl;
	cin>>a>>b;
	cout<<"nhap phep toan"<<endl;
	cin>>opera;
	switch(opera)
	{
		case'+':
			cout<<a+b<<"\n";
			break;
		case'-':
		cout<<a-b<<"/n";
			break;
		case'/':
		cout<<a/b<<"\n";
			break;
		default:
			cout<<"ko co phep toan nao"<<opera<<"\n";
			break;
	}
	cout<<"ket thuc"<<endl;
}

